# Versão ainda mais simplificada do Makefile desse post: 
# https://spin.atomicobject.com/2016/08/26/makefile-c-projects/

TARGET_EXEC ?= a.out

CC = gcc

BUILD_DIR ?= ./build
SRC_DIRS ?= ./src 

SRCS := $(wildcard ./src/hello.c ./**/**/*.c)
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)


# $(TARGET_EXEC): $(OBJS)
$(BUILD_DIR)/$(TARGET_EXEC): $(OBJS)
	@echo "Building executable $@"
	@$(CC)  $(OBJS) -o $@

# c source
$(BUILD_DIR)/%.c.o: %.c
	@echo "Building src file: $<"
	@echo "	output file: $@\n"
	@$(MKDIR_P) $(dir $@)
	@$(CC) -c $< -o $@


.PHONY: clean

clean:
	rm -r $(BUILD_DIR)/*


MKDIR_P ?= mkdir -p