#include <cassert>
#include <iostream>
#include <vector>
#include <deque>
#include <string>
/*
 * You must implement the following class hierarchy
 * Animal
 	* Elephant
	* Bear
	* Cat
 * the class hierarchy should conform to the tests below
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
	Elephant e("fred");
	assert(e.speak() == "trumpet");
	assert(e.size() == 100);
	assert(e.name() == "fred");
	Bear b("bert");
	assert(b.speak() == "roar");
	assert(b.size() == 50);
	assert(b.name() == "bert");
	Cat c("Supreme ruler of all life");
	assert(c.speak() == "Bow before me worthless human");
	assert(c.size() == 5);
	assert(c.name() == "Supreme ruler of all life");
#endif
}

void test2() {
#ifdef TEST2
	Animal *a = new Elephant("fred");
	assert(a->speak() == "trumpet");
	assert(a->size() == 100);
	assert(a->name() == "fred");
	delete a;
	a = new Bear("bert");
	assert(a->speak() == "roar");
	assert(a->size() == 50);
	assert(a->name() == "bert");
	delete a;
#endif
}

void test3() {
#ifdef TEST3
	Animal *a = new Cat("Sumpreme ruler of all life");
	assert(a->speak() == "Bow before me worthless human");
	assert(a->size() == 5);
	assert(a->name() == "Sumpreme ruler of all life");
	Animal *b = a->clone();
	assert(b != a);
	assert(b->speak() == "Bow before me worthless human");
	assert(b->size() == 5);
	assert(b->name() == "Sumpreme ruler of all life");
	delete a;
	delete b;
#endif
}

void test4() {
#ifdef TEST4
	Animal *a = new Cat("Sumpreme ruler of all life");
	Animal *b = a->clone();
	assert(a != b);
	assert(*a == *b);
	Animal *c = new Cat("Soon to be ruler");
	assert(*a != *c);
	delete a;
	delete b;
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
