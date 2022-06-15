#include <iostream>
#include<time.h>
#include<stdlib.h>
#define MAX_NUM 9

using namespace std;

int main()
{
    //nr. 4

    for(char i=65; i<91; i++)
    {
        cout<<i<<endl;
    }

    //nr. 6

    string zodis;
    cin>>zodis;
    for(int i=0; i<zodis.length(); i++)
    {
        if(zodis[i]>=65 && zodis[i]<91)
        {
            zodis[i]=zodis[i]+32;
        }
        else  if(zodis[i]>=97 && zodis[i]<123)
        {
            zodis[i]=zodis[i]-32;
        }

    }
    cout<<zodis<<endl;

    //nr.8

    string numeris;

    for(int i=0;i<3;i++)
    {
       numeris+= rand()%25+65;
    }
    cout<<numeris;

    {
        int random;
        srand(time(NULL));
        for(int i=0; i<3; i++)
        {
            random=rand()%MAX_NUM;
            cout<<random<<endl;
        }
    }

    return 0;
}
