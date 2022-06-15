#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void GenerateArray(int arr[], int len)
{
    for(int i=0; i<len; i++) //kiek kartu reikies tikrinti eilute
    {
        arr[i]= rand()%50;
    }
}

void PrintArray(int arr[], int len)
{
    for(int i=0; i<len; i++) //kiek kartu reikies tikrinti eilute
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void SortArray(int arr[], int len)
{
    int temp;
    for(int i=0; i<len; i++) //kiek kartu reikies tikrinti eilute
    {
        for(int j=0; j<len-1-i; j++)//kiek poru reikia tikrinti
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0; i<len; i++) //kiek kartu reikies tikrinti eilute
    {
        for(int j=0; j<len-1-i; j++)//kiek poru reikia tikrinti
        {
            if(arr[j]%2==0 > arr[j+1]%2!=0)
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i =0; i<len; i++)
    {
        if(arr[i]%2==0)
        {
            for(int j=i; j<len; j++)
            {
                for(int k=i; k<len-1;k++)
                {
                    if(arr[k] > arr[k+1])
                    {
                        temp=arr[k];
                        arr[k]=arr[k+1];
                        arr[k+1]=temp;
                    }
                }
            }
            break;
        }

    }


}



int main()
{
    cout << "Bubble Sort" << endl;

    //spausdinam masyva
    int masyvas[50];
    GenerateArray(masyvas,50);
    PrintArray(masyvas,50);
    SortArray(masyvas,50);
    cout<<endl<<"Atlikta uzduotis"<<endl;
    PrintArray(masyvas,50);


    return 0;
}
