BINNAME = password
BIN_DIR = bin
SRC_DIR = src
OBJ_DIR = obj
TEST_DIR = test
TP_DIR = thirdparty
PWG = src/pwg
LPWG = src/libpwg
CFLAGS = -Wall -Werror
CXX = g++

all: $(BIN_DIR)/$(BINNAME)

.PHONY: all clean

$(BIN_DIR)/$(BINNAME): $(OBJ_DIR)/$(LPWG)/$(BINNAME).o $(OBJ_DIR)/$(PWG)/PassGen.o $(OBJ_DIR)/$(LPWG)/help.o
	$(CXX) $(CFLAGS) -o $(BIN_DIR)/$(BINNAME) $(OBJ_DIR)/$(LPWG)/$(BINNAME).o $(OBJ_DIR)/$(PWG)/PassGen.o $(OBJ_DIR)/$(LPWG)/help.o
bin:
	mkdir bin

$(OBJ_DIR)/$(LPWG)/$(BINNAME).o: $(LPWG)/$(BINNAME).cpp
	$(CXX) $(CFLAGS) -c $(LPWG)/$(BINNAME).cpp -o $(OBJ_DIR)/$(LPWG)/$(BINNAME).o

$(OBJ_DIR)/$(PWG)/PassGen.o: $(PWG)/PassGen.cpp
	$(CXX) $(CFLAGS) -c -I src $(PWG)/PassGen.cpp -o $(OBJ_DIR)/$(PWG)/PassGen.o

$(OBJ_DIR)/$(LPWG)/help.o: $(LPWG)/help.cpp
	$(CXX) $(CFLAGS) -I src -c $(LPWG)/help.cpp -o $(OBJ_DIR)/$(LPWG)/help.o

obj:
	mkdir obj
obj/src:
	mkdir obj/src

clean:
	rm -rf $(BIN_DIR)/$(BINNAME) $(OBJ_DIR)/$(LPWG)/$(BINNAME).o $(OBJ_DIR)/$(PWG)/PassGen.o