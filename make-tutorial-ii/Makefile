# Versão ainda mais simplificada do Makefile desse post: 
# https://spin.atomicobject.com/2016/08/26/makefile-c-projects/

TARGET_EXEC ?= a.out

CC = gcc

BUILD_DIR ?= ./build
SRC_DIRS ?= ./src 

# SRCS := $(wildcard $(SRC_DIRS)/*.c)
SRCS := $(wildcard ./**/*.c)
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)

INC_DIRS := ./inlcude/**
INC_FLAGS := $(addprefix -I, $(INC_DIRS))

$(BUILD_DIR)/$(TARGET_EXEC): $(OBJS)
	# @echo "sources $(SRCS)"
	# @echo "objs $(OBJS)"
	@echo "inc dirs $(INC_DIRS)"
	$(CC)  $(OBJS) -o $@ 

# c source
$(BUILD_DIR)/%.c.o: %.c 
	$(MKDIR_P) $(dir $@)
	$(CC) -c $< -o $@


.PHONY: clean

clean:
	rm -r $(BUILD_DIR)/*


MKDIR_P ?= mkdir -p