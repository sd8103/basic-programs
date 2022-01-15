#include <iostream>
#include <cmath>

using namespace std;

int main() {
   int num, initNum, remainder, n = 0, result = 0, power;
   cout << "Enter an integer: ";
   cin >> num;

   initNum = num;

   while (initNum != 0) {
      initNum /= 10;
      ++n;
   }
   originalNum = num;

   while (initNum != 0) {
      remainder = initNum % 10;

      // pow() returns a double value
      // round() returns the equivalent int
      power = round(pow(remainder, n));
      result += power;
      originalNum /= 10;
   }

   if (result == num)
      cout << num << " is an Armstrong number.";
   else
      cout << num << " is not an Armstrong number.";
   return 0;
}
