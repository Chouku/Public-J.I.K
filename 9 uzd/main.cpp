#include <iostream>

using namespace std;

int main()
{
    double number;

    cin >> number;
   const double a = 32;
   const double b = 5;
   const double c = 9;

    int nawias;
    int result;
   int finish;



   nawias = number - a;
   result = b * nawias;
   finish = result / c;

    cout << "Tc = 5 * (" << number << " - 32) / 9 = " << finish << endl;








}
