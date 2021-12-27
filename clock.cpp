#include <iostream>
#include <unistd.h>
using namespace std;

class Clock {
	int m = 0, s = 0, h = 0;
	public:
		void start() {
			while (true) {
				system("clear");
				cout << h << " : " << m << " : " << s << endl;
				sleep(1);
				s++;
				if (s == 60) {
					s = 0;
					m++;
				}
				if (m == 60) {
					m = 0;
					h++;
				}
			}
		}
};

int main() {
	Clock c1;
	c1.start();
	return 0;
}
