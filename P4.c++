#include <cassert>
#include <iostream>
#include <vector>
#include <deque>
/*
 * You must implement a unique handle that stores a pointer
 * You may not use any stl classes or functions
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
	unique_handle<int> y = new int;
	*y = 0;
	assert(*y == 0);
#endif
}

void test2() {
#ifdef TEST2
	unique_handle<int> y;
	y = new int;
	*y = 3;
	assert(*y == 3);
	unique_handle<int> z = new int;
	*z = 3;
	assert(z != y);
	assert(*z == *y);
#endif
}

void test3() {
#ifdef TEST3
	unique_handle<int> y = new int;
	*y = 3;
	unique_handle<int> z = y;
	assert(z != y);
	assert(*z == *y);
#endif
}

void test4() {
#ifdef TEST4
	unique_handle<int> y = new int;
	*y = 3;
	int *p = &*y;
	unique_handle<int> z = std::move(y);
	assert(*z = 3);
	assert(&*z == p);
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
