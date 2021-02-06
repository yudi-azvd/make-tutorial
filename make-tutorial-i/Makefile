.PHONY = all clean

CC = gcc # compilador

LINKERFLAG = -lm

BIN_DIR = ./bin

SRCS := $(wildcard *.c)
# BINS := $(SRCS:%.c=$(BIN_DIR)/%) # TAMBÉM FUNCIONA
BINS := $(SRCS:%.c=%)

BIN_DIR ?= ./bin

all: ${BINS}
	@echo "Começo do Makefile"
	@echo "${BINS}"

# $(BIN_DIR)/%: %.o	# se for usar BIN_DIR
%: %.o	# ligação
	@echo "Checking..."
	${CC} ${LINKERFLAG} $< -o $@
	# $< é substituído pelos prerequisites
	# $@ é substituído pelos targets
	# essa regra vai ser chamada pra cada valor em ${BINS}

# $(BIN_DIR)/%.o: %.c	# se for usar BIN_DIR
%.o: %.c	# copmilação/tradução?
	@echo "Creating object"
	@echo "eeeeeeeeeeiiiii ${$<}"
	${gcc} -c $<
	# todo prerequisite pra regra anterior é considerada um target pra essa regra


clean:
	@echo "Cleaning"
	rm -rvf *.o ${BINS}