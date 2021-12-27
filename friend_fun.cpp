#include <iostream>
using namespace std;

class B;
class A {
	int x;
	public:
		A(int a) {
			x = a;
		}
		void putdata() {
			cout << "A class: x = " << x << endl;
		}
		friend void swap(A& p, B& q);
};

class B {
	int x;
	public:
		B(int a) {
			x = a;
		}
		void putdata() {
			cout << "B class: x = " << x << endl;
		}
		friend void swap(A& p, B& q);
};

void swap(A& p, B& q) {
	int temp = p.x;
	p.x = q.x;
	q.x = temp;
}

int main() {
	A m(20);
	B n(40);
	cout << "before swapping using friend function" << endl;
	m.putdata();
	n.putdata();
	swap(m, n);
	cout << "after swapping using friend function" << endl;
	m.putdata();
	n.putdata();
	return 0;
}

