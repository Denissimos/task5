INCLUDES = -I src/ -I thirdparty/ -lm
dirs = obj bin
all: $(dirs) ./bin/root ./bin/test

$(dirs):
	mkdir obj
	mkdir bin

./bin/root: ./obj/D.o ./obj/main.o
	gcc ./obj/D.o ./obj/main.o -o ./bin/Discriminant $(INCLUDES)

./bin/test: ./obj/D.o ./obj/main_test.o ./obj/roots_tests.o
	gcc ./obj/D.o ./obj/main_test.o ./obj/roots_tests.o -o ./bin/unit_test $(INCLUDES)

./obj/main.o: ./src/main.c
	gcc -c ./src/main.c -Wall -o ./obj/main.o $(INCLUDES)

./obj/D.o: ./src/D.c
	gcc -c ./src/D.c -Wall -o ./obj/D.o $(INCLUDES)

./obj/roots_tests.o: ./test/roots_tests.c
	gcc -c ./test/roots_tests.c -Wall -o ./obj/roots_tests.o $(INCLUDES)

./obj/main_test.o: ./test/main.c
	gcc -c ./test/main.c -Wall -o ./obj/main_test.o $(INCLUDES)