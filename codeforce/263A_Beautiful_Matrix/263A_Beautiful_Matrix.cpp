#include <iostream>
#include <string>
#include <cmath>
using namespace std; 

int main() {
	int m, a; 
	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			cin >> m;
			if (m == 1) {
				a = abs(i - 2) + abs (j - 2); 
				cout << a; 
				break; 
			}
		}
	}

	return 0;
}