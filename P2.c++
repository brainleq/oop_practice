#include <cassert>
#include <iostream>
#include <vector>
#include <deque>
/*
 * You must implement the stl stack class
 * You may not use any STL containers other than vector, list or deque
 * test1 - 10 points
 * test2 - 10 points
 * test3 - 10 points
 * test4 - 10 points
 */
//#define TEST1
//#define TEST2
//#define TEST3
//#define TEST4


void test1() {
#ifdef TEST1
	Stack<int> a;
	a.push(5);
	assert(a.top() == 5);
	Stack<int> b = {1,2,3,4,5};
	assert(b.top() == 5);
	b.pop();
	assert(b.top() == 4);
#endif
}

void test2() {
#ifdef TEST2
	Stack<int> a = {1,2,3,4,5};
	Stack<int> b = a;
	assert(b.top() == 5);
	b.pop();
	assert(b.top() == 4);
	b = a;
	assert(b.top() == 5);
#endif
}

void test3() {
#ifdef TEST3
	Stack<int> a = {1,2,3,4,5};
	Stack<int> b = std::move(a);
	assert(b.top() == 5);
	assert(a.size() == 0);
	Stack<int> c;
	c = std::move(b);
	assert(c.top() == 5);
	assert(b.size() == 0);
#endif
}

void test4() {
#ifdef TEST4
	Stack<int, std::vector<int>> a = {1,2,3,4,5};
	assert(a.top() == 5);
	a.pop();
	assert(a.top() == 4);
	a.push(3);
	assert(a.top() == 3);
#endif
}



int main() {
	int a;
	std::cin >> a;
	switch (a) {
		case 1:
			test1();
			break;
		case 2:
			test2();
			break;
		case 3:
			test3();
			break;
		case 4:
			test4();
			break;
		default:
			break;
	}
	return 0;
}
