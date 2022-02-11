#include <iostream>
using namespace std;

int main() {
 double x1, x2, x3, temp;
 
  cout << "enter x1" << endl;
  cin >> x1;
  cout << "enter x2" << endl;
  cin >> x2;
  cout << "enter x3" << endl;
  cin >> x3;

  if (x2 < x1) {
    temp = x2;
    x2 = x1;
    x1 = temp;
  } 
  if (x3 < x1) {
    temp = x3;
    x3 = x1;
    x1 = temp;
  }
  if (x3 < x2) {
    temp = x3;
    x3 = x2;
    x
  }

  cout << x1 << endl;
  cout << x2 << endl;
  cout << x3 << endl;

  return 0;
}