#include <cassert>
#include <iostream>
/*
 * You must implement the stl array class
 * You may not use any STL containers
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
	Array<int, 5> a = {1,2,3,4,5};
	assert(equal(begin(a), end(a), begin({1,2,3,4,5})));
#endif
}

void test2() {
#ifdef TEST2
	Array<int, 5> a = {1,2,3,4,5};
	Array<int, 5> b = a;
	assert(equal(begin(a), end(a), begin(b)));
	Array<int, 5> c;
	c = a;
	assert(equal(begin(a), end(a), begin(c)));
#endif
}

void test3() {
#ifdef TEST3
	Array<int, 5> a = {1,2,3,4,5};
	const Array<int, 5> b = a;
	assert(a == b);
	Array<int, 5> c = {2,3,4,5};
	assert(b != c);
	assert({1,2,3,4,5} == b);
#endif
}

void test4() {
#ifdef TEST4
	Array<int, 5> a = {1,2,3,4,5};
	const Array<int, 5> b = a;
	a[0] = 2;
	assert(a[0] == 2);
	assert(b[1] == 2);
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
