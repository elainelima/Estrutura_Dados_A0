CXX		  := g++
CXX_FLAGS := -Wall -Wextra -std=c++17 -ggdb

BIN		:= bin
OBJ   := obj
SRC		:= src
INCLUDE	:= include
LIB		:= lib

LIBRARIES	:=
EXECUTABLE	:= main
OBJECTS		:= $(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(wildcard $(SRC)/*.cpp))


all: $(BIN)/$(EXECUTABLE)

run: clean all
	clear
	./$(ls)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(OBJECTS)
	@echo "building $(OBJECTS)"
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) -L$(LIB) $^ -o $@ $(LIBRARIES)

$(OBJ)/%.o: $(SRC)/%.cpp
	@mkdir -p $(OBJ)
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) -c $< -o $@

clean:
	-rm -rf $(BIN)/*