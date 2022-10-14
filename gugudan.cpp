#include <iostream>
using namespace std;

int main(void) {
	for (int i = 2; i < 10; ++i) {
		/*9단으로 변경*/
		for (int j = 1; j < 10; ++j) {
			cout << i << " x " << j << " = " << i * j << endl;
		}
		cout << endl;
	}


	return 0;
}