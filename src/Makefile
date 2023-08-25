CC=gcc
WWW = -Wall -Wextra -Werror
CFLAGS= -c -std=c11  
FLAGS= -g $(WWW)
ADD_MATH_LIB = $(WWW) -lm

FILES = *.c

TEST_FLAGS=-lcheck --coverage
TEST_FUNC= back/tests/my_test.c

OS := $(shell uname -s)
ifeq ($(OS), Linux)
	TEST_FLAGS += -lsubunit -lrt -lm
	OPEN = echo 'report: C5_calc-2/src/report/index.html'
	DOX = echo 'you must install doxygen'
else
	OPEN=open ./report/index.html
	DOX =brew install doxygen
endif

all: install

install:
	$(DOX)
	mkdir 3D_Viewer
	cd 3D_Viewer; qmake -o ../3D_Viewer/Makefile
	cd 3D_Viewer; make

uninstall:
	rm -rf 3D_Viewer

open:
	open 3D_Viewer/transformations.app

dist:
	tar -czf 3D_Viewer.install.tar.gz ./* *.c *.h

dvi: clean
	doxygen Doxyfile
	open html/index.html

clean:
	rm -rf *.a report gcov test *.gcno *.gcda html back/tests/my_test.c front/build-Viewer-Desktop_x86_darwin_generic_mach_o_64bit-Debug

transformations.a:
	$(CC) $(CFLAGS) -c back/*.c 
	ar rcs transformations.a $(FILES:.c=.o)
	ranlib transformations.a
	rm *.o

gcov_report: clean check
	mkdir -p gcov
	gcc $(FILES) $(TEST_FUNC) -o gcov/greport $(TEST_FLAGS)
	./gcov/greport;
	lcov -t "Viewer" -o Viewer.info -c -d .
	genhtml -o ./report Viewer.info
	$(OPEN)
	rm *.gcda *.gcno *.o *.info

clang:
	clang-format -style="{BasedOnStyle: Google}" -n */*.c */*.h */*/*.h */*/*.c */*/*.cpp

goclang:
	clang-format -style="{BasedOnStyle: Google}" -i */*.c */*.h */*/*.c */*/*.h

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