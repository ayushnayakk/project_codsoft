#include <iostream>
using namespace std;
int main() {
  cout << "this is a calculator " << endl;
  cout << "enter first number ";
  int first_value;
  cin >> first_value;
  cout << "enter second number ";
  int second_value;
  cin >> second_value;
  cout << "enter operation you want ";
  char operation;
  cin >> operation;
  switch (operation) {
  case '+':
    cout << first_value << operation << second_value << "="
         << first_value + second_value;
    break;
  case '-':
    cout << first_value << operation << second_value << "="
         << first_value - second_value;
    break;
  case '*':
    cout << first_value << operation << second_value << "="
         << first_value * second_value;
    break;
  case '/':
    cout << first_value << operation << second_value << "="
         << first_value / second_value;
    break;
  }
}