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

all: $(BINNMAE)

$(BINNAME): $(OBJ_DIR)/$(LPWG)$/(BINNAME).o $(OBJ_DIR)/$(PWG)/PassGen.o
	$(CXX) -o $(BIN_DIR)/$(BINNAME) $(OBJ_DIR)/$(LPWG)/$(BINNAME).o $(OBJ_DIR)/$(PWG)/PassGen.o

$(BINNAME).o: $(SRC_DIR)/$(LPWG)/$(BINNAME).cpp
	$(CXX) -c $(LPWG)/$(BINNAME).cpp -o $(OBJ_DIR)/$(LPWG)/$(BINNAME).o

PassGen.o: $(SRC_DIR)/$(PWG)/PassGen.cpp
	$(CXX) -c -I src $(PWG)/PassGen.cpp -o $(OBJ_DIR)/$(PWG)/PassGen.o

.PHONY: all clean

clean:
	rm -rf $(BIN_DIR)/$(BINNAME) $(OBJ_DIR)/$(LPWG)/$(BINNAME).o $(OBJ_DIR)/$(PWG)/PassGen.o