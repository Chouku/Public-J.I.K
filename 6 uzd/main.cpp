#include <iostream>
using namespace std;

int main()
{
    float pierwiastek;
    float  base, result = 1;

    cout << "Numer i do jakiego pierwiastka:  ";
    cin >> base >> pierwiastek;

    cout << " S ="<< " 6 *" << base << "^" << pierwiastek << " = ";

    while (pierwiastek != 0) {
        result *= base;
        --pierwiastek;
    }



    result = 6 * result;
    cout << result << " kv. cm"<< endl;

    return 0;
}
