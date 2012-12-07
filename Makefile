CPP = g++
CFLAGS = -Wall -Wextra -Werror -pedantic


name_test: name_test.cpp Name.o
	$(CPP) $(CFLAGS) -o name_test name_test.cpp Name.o

Name.o: Name.h Name.cpp
	$(CPP) $(CFLAGS) -c Name.cpp

clean:
	rm -f *.o;
	rm -f name_test;
	rm -f *~;