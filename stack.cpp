#include <iostream>
using namespace std;

class Stack {
	int *stackarr;
	int top = -1;
	int maxsize = 0;
	public:
		Stack(int size) {
			stackarr = new int[size];
			maxsize = size;
		}
		void push(int val) {
			if (top == maxsize - 1) {
				cout << "stack full" << endl;
				return;
			} else {
				stackarr[++top] = val;
			}
		}
		void pop() {
			if (top == -1) {
				cout << "stack empty" << endl;
				return;
			} else {
				cout << "popped : " << stackarr[top--] << endl;
			}
		}
		void display() {
			if (top == -1) {
				cout << "stack empty" << endl;
				return;
			} else {
				cout << "stack top" << endl;
				for (int i = top; i >= 0; i--) {
					cout << stackarr[i] << endl;
				}
				cout << "stack bottom" << endl;
			}
		}
};

int main() {
	Stack s1(3);
	int opt = 0;
	do {
		cout << "1. push\n2. pop\n3. display\n4. exit\n:: ";
		cin >> opt;
		switch(opt) {
			case 1:
				cout << "enter a value: ";
				int val;
				cin >> val;
				s1.push(val);
				break;
			case 2:
				s1.pop();
				break;
			case 3:
				s1.display();
				break;
			case 4:
				cout << "byee" << endl;
				break;
			default:
				cout << "invalid option" << endl;
				break;
		}
	} while (opt != 4);
	return 0;
}
