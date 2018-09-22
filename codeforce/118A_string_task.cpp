#include <iostream>
#include <string>
#include <locale>
#include <vector> 

using namespace std;

int main() {
  locale loc; 
  string s1, s2=""; 
  bool vw;

  cin >> s1;

  vector<char> v = {'a', 'e', 'i', 'o', 'u', 'y'};

  for (int i=0; i<s1.length(); i++) {
  	vw = false;
  	for (int j=0; j<v.size(); j++) {
  		if (v[j] == tolower(s1[i], loc)) vw = true;
  	} 
  	if (!vw) {
  		s2 += '.';
  		s2 += tolower(s1[i], loc);
  	}
  } 
  cout << s2;
  return 0; 
}