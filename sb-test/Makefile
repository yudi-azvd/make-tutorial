# https://codereview.stackexchange.com/questions/157780/generic-makefile-handling-unit-testing-and-folder-structure
# A pergunta desse post me ajudou MUITO.

## Não colocar './' no começo dos nomes de diretórios.

## É aconselhável que o nome do target seja diferente do nome do arquivo

TARGET_EXEC ?= proj

TESTS_EXEC ?= test_exec

CXX = g++

BUILD_DIR ?= build
SRC_DIRS ?= src 

MAIN := src/main.c
SRCS := $(wildcard src/*.c)
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)

TEST_MAIN := ./tests/test_main.c
TEST_SRCS := $(wildcard tests/*.c)
TEST_OBJS := $(filter-out build/src/main.c.o, $(OBJS)) \
						 $(TEST_SRCS:%=$(BUILD_DIR)/%.o)


# all: $(TARGET_EXEC) $(TESTS_EXEC) # executáveis dentro no diretório raíz
all: $(BUILD_DIR)/$(TARGET_EXEC) test # executáveis dentro de build/
# all: $(BUILD_DIR)/$(TARGET_EXEC) # executáveis dentro de build/


$(BUILD_DIR)/$(TARGET_EXEC): $(OBJS) $(MAIN) # 
# $(TARGET_EXEC): $(OBJS) $(MAIN)
	@echo ">> Building main executable"
	@$(CXX)  $(OBJS) -o $@
	@echo " > Done $@"


# c source
$(BUILD_DIR)/%.c.o: %.c
	@echo ">> Building source file: $<"
	@echo " > Output file: $@\n"
	@$(MKDIR_P) $(dir $@)
	@$(CXX) -c $< -o $@


####################################
# Tests  													 #
####################################
test: $(BUILD_DIR)/$(TESTS_EXEC) # executável de teste dentro de build/
# test: $(TESTS_EXEC)	# executável de teste na raíz do projeto
	@echo " > Build done"

$(BUILD_DIR)/$(TESTS_EXEC): $(TEST_OBJS) # executável de teste dentro de build/
# $(TESTS_EXEC): $(TEST_OBJS) # executável de teste na raíz do projeto
	@echo ">> Building main TEST executable $@"
	@$(CXX)  $(TEST_OBJS) -o $@


$(BUILD_DIR)/%.c.o: %.c
	@echo ">> Building test source: $<"
	@echo " > Output file: $@\n"
	@$(MKDIR_P) $(dir $@)
	@$(CXX) -c $< -o $@


.PHONY: clean test

clean:
	rm -fr $(BUILD_DIR)/* $(TARGET_EXEC) $(TESTS_EXEC)


MKDIR_P ?= mkdir -p