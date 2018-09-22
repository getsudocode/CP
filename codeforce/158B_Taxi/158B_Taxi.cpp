#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std; 

int main() {
	int n, c=0, t = 0;
	bool is;
	cin >> n;
	vector<int> s(n);
	vector<int> u;
	for (int i=0; i<n; i++) {
		cin >> s[i];
	} 
	sort(s.begin(), s.end());

	for (int i=0; i<n; i++) {
		if ((t+s[i]) <= 4) {
			t += s[i];
		} else {
			t = 0;
			c++;
		}
	} 

	cout << (n-c);

	return 0;
}