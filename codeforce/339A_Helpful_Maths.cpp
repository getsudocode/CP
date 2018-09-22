#include <iostream>
#include <string>
using namespace std;
int main() {
	string s, sa;
	cin >> s;
	vector<int> a(s.length()); 

	for (int i=0; i<s.length(); i+=2) {
		a[i] = (int)s[i];
	}
	sort(a, a.begin(), a.end());

	for (int i=0; i<a.size(); i++) {
		sa += a[i];
		if (i != (a.size() - 1)) sa += '+';
	}
	cout << sa;

	return 0;
	
}