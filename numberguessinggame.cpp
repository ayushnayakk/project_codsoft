#include <iostream>
using namespace std;
int main() {
  int mynum, entered_num;
  mynum = 7;
  while (1) {
    cout << "enter number to start game";
    cin >> entered_num;
    if (mynum == entered_num) {
      cout << "congrats the entered number is same as my number u guessed it "
              "right"
           << endl;
      break;
    } else if (mynum > entered_num) {
      cout << "the number u entered is less than my number" << endl;
    } else {
      cout << "the entered number is greater than my number" << endl;
    }
  }
}
