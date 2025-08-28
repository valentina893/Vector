CC = gcc

BIN = bin
SRC = src
TESTS = tests

VECTOR = $(BIN)/vector.o

all: $(VECTOR) $(TESTS)

$(VECTOR): $(SRC)/vector.c
	@mkdir -p $(BIN)
	$(CC) -c $< -o $@

$(TESTS)/%: $(TESTS)/%.c $(VECTOR_OBJ)
	$(CC) $< $(VECTOR) -o $@

run_tests: $(TESTS)
	./bin/tests

run_main: $(TESTS)
	./bin/main
