#include <iostream>
using namespace std;

int main()
{

  int first_number, second_number, sum;
  char c = 'd';
  double a = 0;
  int d = a + c;
  bool b = true;

  cout << "Enter two integers: ";
  cin >> first_number >> second_number;

  // sum of two numbers in stored in variable sumOfTwoNumbers
  sum = first_number + second_number;

  if (true)
  {
    cout << "how are you";
  }

  // prints sum
  cout << first_number << " + " << second_number << " = " << sum;

  return 0;
}