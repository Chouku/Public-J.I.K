#include <cstdio>
#include <iostream>
using namespace std;
int main () {
//3796 i 50000 selund
int seconds, hours, minutes;
cin >> seconds;
minutes = seconds / 60;
hours = minutes / 60;
cout << seconds << " ile sekund? " << int(hours) << " val. " << int(minutes%60)
     << " min. " ;
}
