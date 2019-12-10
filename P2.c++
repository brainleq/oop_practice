#include <cassert>
#include <iostream>
#include <vector>
#include <deque>
#include <initializer_list>
/*
 * You must implement the stl stack class
 * You may not use any STL containers other than vector, list or deque
 * test1 - 10 points
 * test2 - 10 points
 * test3 - 10 points
 * test4 - 10 points
 */
#define TEST1
#define TEST2
#define TEST3
#define TEST4

using namespace std;
template <typename T, typename T2 = vector<int>>
class Stack {
	private:
		vector<T> _c;
	
	public:
		Stack () = default;

		Stack (initializer_list<T> il) {
			_c.resize(il.size());
			copy(il.begin(), il.end(), _c.begin());
		}

		Stack (const Stack& s) {
			_c.resize(s.size());
			copy(s._c.begin(), s._c.end(), _c.begin());
		}
	
		Stack (Stack&& rhs) {
			_c.swap(rhs._c);
		}
		
		Stack& operator = (Stack&& rhs) {
			Stack temp(move(rhs));
			_c.swap(temp._c);
			return *this;
		}

		Stack& operator = (const Stack& s) {
			Stack temp(s);
			_c.swap(temp._c);
			return *this;
		}

		void push (T e) {
			_c.push_back(e);
		}

		T top () {
			return _c.back();
		}

		void pop () {
			return _c.pop_back();
		}

		int size () const {
			return _c.size();
		}

};

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
