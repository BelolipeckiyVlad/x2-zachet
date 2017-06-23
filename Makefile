CFLAGS = -Wall -Werror -MP -MMD -std=c99
.PHONY: clean all x2 test

all :
	make bin/x2

bin/x2 : build/main.o build/x2.o
	gcc build/main.o build/x2.o -o bin/x2 $(CFLAGS)

build/main.o : src/main.c src/x2.h
	gcc -c src/main.c -o build/main.o $(CFLAGS)

build/x2.o : src/x2.c src/x2.h
	gcc -c src/x2.c -o build/x2.o $(CFLAGS)
	
test:
	make bin/x2-test
	bin/x2-test

bin/x2-test : build/test/main.o build/test/x2-test.o
	@echo "Making binary"
	@gcc build/test/main.o build/test/x2-test.o build/test/x2.o -o bin/x2-test $(CFLAGS)

build/test/main.o : src/x2.h test/main.c
	@echo "Making main.o"
	@gcc -I thirdparty -c test/main.c -o build/test/main.o $(CFLAGS)
	@gcc -c src/x2.c -o build/test/x2.o $(CFLAGS) 

build/test/x2-test.o : src/x2.h test/x2-test.c
	@echo "Making x2-test.o"
	@gcc -c -I thirdparty test/x2-test.c -o build/test/x2-test.o $(CFLAGS)

build/test/x2.o : src/x2.h src/x2.c
	@echo "Making x2.o"
	@gcc -c src/x2.c -o build/test/x2.o $(CFLAGS)

clean :
	@echo "Cleaning files in build directory"
	@rm -rf build/*.d build/test/*.d 
	@rm -rf build/*.o build/test/*.o
	@echo "Cleaning binaries"
	@rm -f bin/x2 bin/x2-test
	@echo "All files have been cleaned."

-include build/*.d
