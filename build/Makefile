INTEGER_PATH := ../integer/src
INTEGER_SRC := $(wildcard ../integer/src/*.cpp)
INTEGER_INC := -I../integer/inc
INTEGER_OBJ := $(addprefix objs/,$(notdir $(INTEGER_SRC:.cpp=.o)))

GCC := g++
LD_FLAGS := ar -cvq
CC_FLAGS := -g -c -Wall -O3

LIB := ../lib/libutility.a

$(LIB): $(INTEGER_OBJ)
	$(LD_FLAGS) -o $@ $^

objs/%.o: $(INTEGER_PATH)/%.cpp
	$(GCC) $(CC_FLAGS) $(INTEGER_INC) -o $@ $<

clean:
	rm -rf objs/* ../lib/*
