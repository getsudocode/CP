#include <iostream>
#include <string>
using namespace std;
int main() {
	char c;
	int a = 1; 
	char p = '2';
	while (cin >> c) {
		if (c == p) a++;
		else a = 1;
		p = c; 
		if (a >= 7) {
		    cout << "YES";
		    return 0;
		}
	}
	cout << "NO";
	return 0;
}