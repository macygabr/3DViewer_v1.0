CC=gcc
WWW = -Wall -Wextra -Werror
CFLAGS= -c -std=c11  
FLAGS= -g $(WWW)
ADD_MATH_LIB = $(WWW) -lm

FILES = *.c

TEST_FLAGS=-lcheck --coverage
TEST_FUNC= tests/calc_test.c

OS := $(shell uname -s)
ifeq ($(OS), Linux)
	TEST_FLAGS += -lsubunit -lrt -lm
	OPEN = echo 'report: C5_calc-2/src/report/index.html'
else
	OPEN=open ./report/index.html
endif

all: install

install:
	mkdir Calculator
	cd SmartCalc; qmake -o ../Calculator/Makefile
	cd Calculator; make

uninstall:
	rm -rf Calculator

open:
	open Calculator/Smarttransformations.app

dist:
	tar -czf SmartCalc.install.tar.gz ./* *.c *.h

dvi:
	open SmartCalc/smartcalc.txt

clean:
	rm -rf *.a report gcov tests/my_test.c test *.gcno *.gcda

transformations.a:
	$(CC) $(CFLAGS) -c back/*.c 
	ar rcs transformations.a $(FILES:.c=.o)
	ranlib transformations.a
	rm *.o

gcov_report: clean check
	mkdir -p gcov
	gcc $(FILES) $(TEST_FUNC) -o gcov/greport $(TEST_FLAGS)
	./gcov/greport;
	lcov -t "calc" -o calc.info -c -d .
	genhtml -o ./report calc.info
	$(OPEN)
	rm *.gcda *.gcno *.o *.info

clang:
	clang-format -style="{BasedOnStyle: Google}" -n *.c *.h

check:
	checkmk clean_mode=1 back/tests/headers.check back/tests/*.check > back/tests/my_test.c

test: clean transformations.a check
	$(CC) -std=c11  back/tests/my_test.c transformations.a -o test $(TEST_FLAGS)
	./test

mytest: clean transformations.a
	$(CC) -std=c11  back/tests/test.c transformations.a -o test $(TEST_FLAGS)
	./test

valgrind: clean check transformations.a test
	CK_FORK=no valgrind --tool=memcheck --leak-check=yes --track-origins=yes  -s ./test