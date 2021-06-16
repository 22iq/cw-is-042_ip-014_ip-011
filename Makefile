BINNAME = password
BIN_DIR = bin
SRC_DIR = src
OBJ_DIR = obj
TEST_DIR = test
TP_DIR = thirdparty
LPWG_TEST = obj/test/src/libpwg
PWG_TEST = obj/test/src/pwg
PWG = src/pwg
LPWG = src/libpwg
CFLAGS = -Wall -Werror
CXX = g++

all: $(BIN_DIR)/$(BINNAME)

.PHONY: all clean test

$(BIN_DIR)/$(BINNAME): $(OBJ_DIR)/$(LPWG)/$(BINNAME).o $(OBJ_DIR)/$(PWG)/PassGen.o $(OBJ_DIR)/$(LPWG)/help.o
	$(CXX) $(CFLAGS) -o $(BIN_DIR)/$(BINNAME) $(OBJ_DIR)/$(LPWG)/$(BINNAME).o $(OBJ_DIR)/$(PWG)/PassGen.o $(OBJ_DIR)/$(LPWG)/help.o

$(OBJ_DIR)/$(LPWG)/$(BINNAME).o: $(LPWG)/$(BINNAME).cpp
	$(CXX) $(CFLAGS) -c $(LPWG)/$(BINNAME).cpp -o $(OBJ_DIR)/$(LPWG)/$(BINNAME).o

$(OBJ_DIR)/$(PWG)/PassGen.o: $(PWG)/PassGen.cpp
	$(CXX) $(CFLAGS) -c -I src $(PWG)/PassGen.cpp -o $(OBJ_DIR)/$(PWG)/PassGen.o

$(OBJ_DIR)/$(LPWG)/help.o: $(LPWG)/help.cpp
	$(CXX) $(CFLAGS) -I src -c $(LPWG)/help.cpp -o $(OBJ_DIR)/$(LPWG)/help.o

$(OBJ_DIR):
	mkdir $(OBJ_DIR)
$(OBJ_DIR)/$(SRC_DIR):
	mkdir $(OBJ_DIR)/$(SRC_DIR)
$(OBJ_DIR)/$(TEST_DIR):
	mkdir $(OBJ_DIR)/$(TEST_DIR)
$(LPWG_TEST):
	mkdir $(LPWG_TEST)
$(PWG_TEST):
	mkdir $(PWG_TEST)
$(BIN_DIR):
	mkdir $(BIN_DIR)

test: $(BIN_DIR)/test

$(BIN_DIR)/test: $(LPWG_TEST)/lat_little_test.o $(LPWG_TEST)/lat_big_test.o $(LPWG_TEST)/special_test.o $(LPWG_TEST)/numeric_test.o $(TEST_DIR)/$(PWG)/password_test.cpp
	$(CXX) $(CFLAGS) -I $(TEST_DIR)/$(SRC_DIR) -I $(TP_DIR) -I $(SRC_DIR) $(TEST_DIR)/$(PWG)/password_test.cpp $(LPWG_TEST)/lat_little_test.o $(LPWG_TEST)/lat_big_test.o $(LPWG_TEST)/special_test.o $(LPWG_TEST)/numeric_test.o -o $(BIN_DIR)/test

$(LPWG_TEST)/lat_little_test.o: $(TEST_DIR)/$(LPWG)/lat_little.cpp
	$(CXX) $(CFLAGS) -c $(TEST_DIR)/$(LPWG)/lat_little.cpp -o $(LPWG_TEST)/lat_little_test.o

$(LPWG_TEST)/lat_big_test.o: $(TEST_DIR)/$(LPWG)/lat_big.cpp
	$(CXX) $(CFLAGS) -c $(TEST_DIR)/$(LPWG)/lat_big.cpp -o $(LPWG_TEST)/lat_big_test.o

$(LPWG_TEST)/special_test.o: $(TEST_DIR)/$(LPWG)/special.cpp
	$(CXX) $(CFLAGS) -c $(TEST_DIR)/$(LPWG)/special.cpp -o $(LPWG_TEST)/special_test.o

$(LPWG_TEST)/numeric_test.o: $(TEST_DIR)/$(LPWG)/numeric.cpp
	$(CXX) $(CFLAGS) -c $(TEST_DIR)/$(LPWG)/numeric.cpp -o $(LPWG_TEST)/numeric_test.o


clean:
	rm -rf $(BIN_DIR)/$(BINNAME) $(BIN_DIR)/test $(OBJ_DIR)/$(SRC_DIR)/$(LPWG)/*.o $(OBJ_DIR)/$(SRC_DIR)/$(PWG)/*.o $(OBJ_DIR)/$(TEST_DIR)/$(LPWG)/*.o $(OBJ_DIR)/$(PWG)/*.o $(OBJ_DIR)/$(LPWG)/*.o