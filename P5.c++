#include <cassert>
#include <iostream>
#include <vector>
#include <deque>
/*
 * You must implement a shared handle that stores a pointer
 * You may not use any stl classes or functions
 * test1 - 5 points
 * test2 - 5 points
 * test3 - 5 points
 * test4 - 5 points
 * test5 - 10 points
 * test6 - 10 points
 */
//#define TEST1
//#define TEST2
//#define TEST3
//#define TEST4
//#define TEST5
//#define TEST6



void test1() {
#ifdef TEST1
	shared_handle<int> y;
	assert(nullptr == y);
#endif
}

void test2() {
#ifdef TEST2
	shared_handle<int> y = new int;
	*y = 0;
	assert(*y == 0);
#endif
}

void test3() {
#ifdef TEST3
	shared_handle<int> y;
	y = new int;
	*y = 3;
	assert(*y == 3);
	shared_handle<int> z = new int;
	*z = 3;
	assert(z != y);
	assert(*z == *y);
#endif
}

void test4() {
#ifdef TEST4
	shared_handle<int> y = new int;
	*y = 3;
	shared_handle<int> z = y;
	assert(z == y);
	assert(*z == *y);
#endif
}

void test5() {
#ifdef TEST5
	shared_handle<int> y = new int;
	*y = 3;
	shared_handle<int> z = y;
	int *p = &*y;
	y = new int;
	*y = 2;
	assert(&*z == p);
	assert(*z == *p);
	assert(&*y != p);
	assert(*y != *p);
	assert(*p == 3);
#endif
}

void test6() {
#ifdef TEST6
	shared_handle<int> y = new int;
	*y = 3;
	int *p = &*y;
	assert(*p == 3);
	shared_handle<int> z = std::move(y);
	assert(p == &*z);
	y = new int;
	*y = 4;
	assert(*y != *z);
	assert(&*y != &*z);
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
		case 5:
			test5();
			break;
		case 6:
			test6();
			break;
		default:
			break;
	}
	return 0;
}
