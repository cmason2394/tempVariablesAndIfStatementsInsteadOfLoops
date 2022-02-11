//Jan 31, 2022
//Objective: sort 3 numbers by ascending order

#include <iostream>
using namespace std;

int main() {
 //name variables
 double x1, x2, x3, temp;
 
 //enter variables
  cout << "enter x1" << endl;
  cin >> x1;
  cout << "enter x2" << endl;
  cin >> x2;
  cout << "enter x3" << endl;
  cin >> x3;

//Check to see if x2 is bigger than x1, and if it is, switch it.
  if (x2 < x1) {
    temp = x2;
    x2 = x1;
    x1 = temp;
  } 

  //Check to see if x3 is smaller than the number in the x1 position (which will be the lowest between x2 and x1 from the step above) and if it is, switch it. 
  if (x3 < x1) {
    temp = x3;
    x3 = x1;
    x1 = temp;
  }

  //Check to see if x2 is bigger than x3 (the values in those positions, may have been switched from previous steps) and if it is, switch it. 
  if (x3 < x2) {
    temp = x3;
    x3 = x2;
    x2 = temp;
  }

//Output x1, x2 and x3, which will now be sorted least to greatest
  cout << x1 << endl;
  cout << x2 << endl;
  cout << x3 << endl;

  return 0;
}