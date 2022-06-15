#include <iostream>
#include <math.h>

using namespace std;

void Laipsnis(int a, int b)
{
    cout << pow(a,b);
}


void KurisDidenis(int a, int b)
{

    if (a > b)
    {
        cout << "Pirmas skaicius yra didesnis " << endl;
    }
    else
    {
        cout << "Antras skaicius yra didesnis " << endl;
    }

}

void StaciakampioPlotas(int a, int b)
{
    cout << a*b;
}

void StaciakampioPerimetras(int a, int b)
{
    cout << (a+b)*2;
}

void PirminiaiSkaiciai(int a, int b)
{
    bool yraPirminis = true;

    for(int i = 2; i <= a / 2; i++)
    {
        if(a % i == 0)
        {
            yraPirminis = false;
            break;
        }
    }
    if (yraPirminis)
    {
        cout << "Skaicius yra pirminis ";
    }
    else
    {
        cout << "Skaicius nera pirminis ";
    }
}



int main()
{
    int sk1;
    int sk2;
    int sk3;

    /// pirma uzduotis
    cout << "Skaiciaus kelimas laipsniu " << endl;
    cout << "Iveskite skaiciu kuri kelsim laipsniu " << endl;
    cin >> sk1;
    cout << "Iveskite laipsni " << endl;
    cin >> sk2;
    Laipsnis(sk1, sk2);
    cout << endl;

    /// antra uzduotis
    cout << endl;
    cout << "Kuris skaicius didesnis " << endl;
    cout<<"Iveskite du skaicius: ";
    cin>>sk1>>sk2;
    KurisDidenis(sk1,sk2);

    /// trecia uzduotis
    cout << endl;
    cout << "Staciakampio plotas " << endl;
    cout << "Iveskite dvi krastines " << endl;
    cin>>sk1>>sk2;
    cout << "Staciakampio plotas lygus: ";
    StaciakampioPlotas(sk1, sk2);
    cout << endl;

    /// ketvirta uzduotis
    cout << endl;
    cout << "Staciakampio perimetras " << endl;
    cout << "Iveskite dvi staciakampio krastines " << endl;
    cin >> sk1 >> sk2;
    cout << "Staciakampio perimetras lygus: ";
    StaciakampioPerimetras(sk1, sk2);
    cout << endl;

    /// penkta uzduotis
... (9 lines left)
