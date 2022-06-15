#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
using namespace std;


int main()

{

   for(char i=65;i<91;i++)
    {
        cout<<i<<endl;
    }


    cout<<endl;




    string tekstas = "lAbaS";
    int dydis =0;

     for(int i=0; tekstas[i] != '\0'; i++)
    {
        if (tekstas [i] < 91) {tekstas [i] = tekstas [i] + 32;}
        else {tekstas [i] = tekstas [i] - 32;}
    }

cout <<tekstas;

return 0;

}
