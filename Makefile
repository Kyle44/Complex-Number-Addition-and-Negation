all:
	g++ -Wall -ansi Complex.cpp Lab8.cpp -o Lab8.out
run:
	./Lab8.out
clean:
	rm -rf *.o *~ *#
