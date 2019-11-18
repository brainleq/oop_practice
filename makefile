P1: P1.c++
	g++ -std=c++14 P1.c++ -o P1
	echo 1 | ./P1
	echo 2 | ./P1
	echo 3 | ./P1
	echo 4 | ./P1
P2: P2.c++
	g++ -std=c++14 P2.c++ -o P2
	echo 1 | ./P2
	echo 2 | ./P2
	echo 3 | ./P2
	echo 4 | ./P2
P3: P3.c++
	g++ -std=c++14 P3.c++ -o P3
	echo 1 | ./P3
	echo 2 | ./P3
	echo 3 | ./P3
	echo 4 | ./P3
P4: P4.c++
	g++ -std=c++14 P4.c++ -o P4
	echo 1 | ./P4
	echo 2 | ./P4
	echo 3 | ./P4
	echo 4 | ./P4
P5: P5.c++
	g++ -std=c++14 P5.c++ -o P5
	echo 1 | ./P5
	echo 2 | ./P5
	echo 3 | ./P5
	echo 4 | ./P5
	echo 5 | ./P5
	echo 6 | ./P5
clean:
	rm -f P1
	rm -f P2
	rm -f P3
	rm -f P4
	rm -f P5
