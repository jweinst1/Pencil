
CC = gcc
CCPP = g++
CPPFLAGS =	-std=c++11
CPPLINK = -lstdc++
INC_DIR = include
NAME = Farmer

C_FILES := $(wildcard src/*/*.cpp)
OBJ_FILES := $(patsubst src/%,lib/%,$(C_FILES:.cpp=.o))
LD_FLAGS :=
CC_FLAGS := -c -Wall -I$(INC_DIR)

all: bin/$(NAME)

bin/$(NAME): $(OBJ_FILES) ; $(CCPP) $(LD_FLAGS) -o $@ $^ | mkdir -p bin

lib/%.o: src/%.cpp
	    mkdir -p $(dir $@)
	    $(CCPP) $(CC_FLAGS) -c -o $@ $<
