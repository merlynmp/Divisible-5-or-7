// Merlyn Pothen
#include <iostream>
using namespace std;
int main() {

  // integers
  int x;
  int y;

  // user input
  cout << "Enter a three digit number: ";
  cin >> x;
  if (x <= 99 || x >= 1000) {
    cout << "This is not a three digit number!";
    return 0;
  }

  cout << "Enter a four digit number: ";
  cin >> y;
  if (y <= 999 || y >= 10000) {
    cout << "This is not a four digit number!";
    return 0;
  }

  // from x to y, if the integer is divisible by 5 or 7, the print the integer.
  // Increase x by one.
  while (x < y) {
    x = x + 1;
    if (x % 5 == 0 || x % 7 == 0) {
      cout << x << " ";
    }
  }

  return 0;
}