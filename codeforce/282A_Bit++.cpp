#include <iostream>
using namespace std;
int main() {
	int n, x=0;
	string s;
	cin >> n;
	while (cin >> s) {
		for (int i=0; i < (s.length() - 1); i++) {
			if ((s[i] == '+') && (s[i+1] == '+')) {
				x++;
			} else if ((s[i] == '-') && (s[i+1] == '-')) {
				x--;
			}
		}
	}
	cout << x;
	return 0;
}