##########################################################################################
# Simple makefile to build the utility
# It will generate the library(static) that can be used by other programs.
# It will generate the test suite executable to test the test suite for it.
# Rakesh Kumar @ cpp.rakesh@gmail.com
# Date: Dec 17th, 2016
##########################################################################################

INTEGER_PATH    := ../integer/src
INTEGER_SRC     := $(wildcard ../integer/src/*.cpp)
INTEGER_INC     := -I../integer/inc
OBJ_FILES       := $(addprefix objs/,$(notdir $(INTEGER_SRC:.cpp=.o)))

TEST_SUITE_PATH := ../test/src
TEST_SUITE_SRC  := $(wildcard ../test/src/*.cpp)
TEST_SUITE_INC  := -I../test/inc
OBJ_FILES       += $(addprefix objs/,$(notdir $(TEST_SUITE_SRC:.cpp=.o)))

NUMBER_PATH     := ../maths/number/src
NUMBER_SRC      := $(wildcard ../maths/number/src/*.cpp)
NUMBER_INC      := -I../maths/number/inc
OBJ_FILES       += $(addprefix objs/,$(notdir $(NUMBER_SRC:.cpp=.o)))

MODULO_PATH     := ../maths/modulo/src
MODULO_SRC      := $(wildcard ../maths/modulo/src/*.cpp)
MODULO_INC      := -I../maths/modulo/inc
OBJ_FILES       += $(addprefix objs/,$(notdir $(MODULO_SRC:.cpp=.o)))

OBJ_PATH        := objs

EXE             := test

GCC             := g++
LD_FLAGS        := ar -cvq
CC_FLAGS        := -g -c -Wall -O3

INCLUDE         := $(INTEGER_INC)
INCLUDE         += $(TEST_SUITE_INC)
INCLUDE         += -I../common/inc
INCLUDE         += -I../string/inc
INCLUDE         += -I../maths/general/inc
INCLUDE         += -I../maths/number/inc
INCLUDE         += -I../maths/modulo/inc
INCLUDE         += -I../algorithms/sort/inc/
INCLUDE         += -I../algorithms/search/inc/

LIB             := ../lib/libutility.a

all: $(OBJ_FILES)
	@echo "Generating Utility static library --> $(LIB)"
	@$(LD_FLAGS) -o $(LIB) $(OBJ_PATH)/integer.o
	@echo "Generating Test Suite exe --> $(EXE)"
	@$(GCC) -o $(EXE) $(OBJ_PATH)/*.o

$(OBJ_PATH)/%.o : $(INTEGER_PATH)/%.cpp
	@echo "Compiling --> $<"
	@$(GCC) $(CC_FLAGS) $(INCLUDE) $< -o $@

$(OBJ_PATH)/%.o : $(TEST_SUITE_PATH)/%.cpp
	@echo "Compiling --> $<"
	@$(GCC) $(CC_FLAGS) $(INCLUDE) $< -o $@

$(OBJ_PATH)/%.o : $(NUMBER_PATH)/%.cpp
	@echo "Compiling --> $<"
	@$(GCC) $(CC_FLAGS) $(INCLUDE) $< -o $@

$(OBJ_PATH)/%.o : $(MODULO_PATH)/%.cpp
	@echo "Compiling --> $<"
	@$(GCC) $(CC_FLAGS) $(INCLUDE) $< -o $@

.PHONEY:

clean:
	rm -rf objs/* $(EXE) $(LIB)


