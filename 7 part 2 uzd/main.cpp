#include <iostream>
using namespace std;
int powtasz(int arr[], int n){ //---------|
   for (int i = 0; i < n; i++) {//        |____ internet
      int ctr = 0;//                      |
      for (int j = 0; j < n; j++) {//-----|
         if (arr[i] == arr[j])//----------|
            ctr++;//----------------------|
      }
      if (ctr % 2 != 0)
         return arr[i];
   }
   return -1;
}
int main() {
   int arr[] = {7, 7, 7, 7, 8, 7, 7, 7, 7};
   int n = 9;
   cout <<powtasz(arr, n);
   return 0;
}

//55.55% wziono z internetu
