#include <iostream>
#define SIZE 4
using namespace std;

class Employee {
	char name[30];
	int sal;
	public:
	void getdata() {
		cout << "enter employee name: ";
		cin >> name;
		cout << "enter the salary: ";
		cin >> sal;
	}
	void putdata() {
		cout << "name : " << name << endl
		<< "base salary : " << sal << endl;
	}
};

int main() {
	Employee workers[SIZE];
	for (int i = 0; i < SIZE; i++) {
		workers[i].getdata();
	}
	cout << "outputting data" << endl;
	for (int i = 0; i < SIZE; i++) {
		workers[i].putdata();
	}
	return 0;
}
