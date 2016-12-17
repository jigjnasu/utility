##########################################################################################
# Simple makefile to build the utility
# It will generate the library(static) that can be used by other programs.
# It will generate the test suite executable to test the test suite for it.
# Rakesh Kumar @ cpp.rakesh@gmail.com
# Date: Dec 17th, 2016
##########################################################################################

INTEGER_PATH := ../integer/src
INTEGER_SRC  := $(wildcard ../integer/src/*.cpp)
INTEGER_INC  := -I../integer/inc
INTEGER_OBJ  := $(addprefix objs/,$(notdir $(INTEGER_SRC:.cpp=.o)))

TEST_SUITE_PATH := ../test/src
TEST_SUITE_SRC  := $(wildcard ../integer/src/*.cpp)
TEST_SUITE_INC  := -I../test/inc
TEST_SUITE_OBJ  := $(addprefix objs/,$(notdir $(TEST_SUITE_SRC:.cpp=.o)))

EXE := test

GCC := g++
LD_FLAGS := ar -cvq
CC_FLAGS := -g -c -Wall -O3

LIB := ../lib/libutility.a

$(LIB): $(INTEGER_OBJ) $(TEST_SUITE_OBJ)
	$(LD_FLAGS) -o $@ $^

objs/%.o: $(INTEGER_PATH)/%.cpp
	$(GCC) $(CC_FLAGS) $(INTEGER_INC) -o $@ $<

objs/%.o: $(TEST_SUITE_PATH)/%.cpp
	$(GCC) $(CC_FLAGS) $(TEST_SUITE_INC) -o $@ $<

clean_obj:
	rm -rf objs/*

clean:
	rm -rf objs/* ../lib/* $EXE
