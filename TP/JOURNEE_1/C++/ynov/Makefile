.PHONY: all
all: HelloWorld

HelloWorld: src/Student.cpp src/HelloWorld.cpp 
	mkdir -p bin
	g++ -o bin/HelloWorld src/Student.cpp src/HelloWorld.cpp 

.PHONY: install
install:
	cp -p bin/HelloWorld /usr/sbin/

.PHONY: clean 
clean:
	rm -f bin/HelloWorld

distClean:
	rm -f /usr/sbin/HelloWorld