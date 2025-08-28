CC = gcc

BIN = bin
SRC = src
TESTS = tests

VECTOR = $(BIN)/vector.o

all: $(VECTOR) $(TESTS)

$(VECTOR): $(SRC)/vector.c
	@mkdir -p $(BIN)
	$(CC) -c $< -o $@
