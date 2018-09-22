#include <iostream>
#include <string>

using namespace std;

int main() {
  int n, a, ones = 0, count = 0;
  cin >> n;
  for (int i=0; i<n; i++) {
    ones = 0; 
    for (int j=0; j<3; j++) {
      cin >> a;
      if (a == 1) ones++;
    }
    if (ones > 1) count++;
  } 
  cout << count;
  return 0; 
}