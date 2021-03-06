.PHONY: clean all test
CFLAGS = -Wall -Werror -MP -MMD 

all: bin/x2

bin/x2: build/main.o build/x2.o
	@echo "Make ready" 
	@gcc $(CFLAGS) build/main.o build/x2.o -o bin/x2 -lm

build/main.o: src/main.c src/x2.h
	@gcc $(CFLAGS) -c src/main.c -o build/main.o -lm 

build/x2.o: src/x2.c src/x2.h 
	@gcc $(CFLAGS) -c src/x2.c -o build/x2.o
test:
	make bin/x2-test
	bin/x2-test
bin/x2-test: build/test/main.o build/test/x2-test.o
	@gcc $(CFLAGS) build/test/main.o build/test/x2-test.o build/x2.o -o bin/x2-test -lm
build/test/main.o: test/main.c src/x2.h
	@gcc $(CFLAGS) -I thirdparty -c test/main.c -o build/test/main.o -lm
build/test/x2-test.o: src/x2.h test/x2-test.c
	@gcc $(CFlAGS) -I thirdparty -c test/x2-test.c -o build/test/x2-test.o 
clean:
	@echo "Cleaning directory files" 	
	@rm -rf build/*.d build/*.o 
	@rm -rf build/test/*.d build/test/*.o
	@echo "Cleaning binaries"
	@rm -rf bin/x2 
	@rm -rf bin/x2_test
	@echo "All files cleaned."	

-include build/*.d

