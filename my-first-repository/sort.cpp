// C++ program to demonstrate default behaviour of
// sort() in STL.
#include <bits/stdc++.h>
using namespace std;

int main()
{
 int userInput[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
 int n = sizeof(userInput) / sizeof(userInput[0]);

 /*Here we take two parameters, the beginning of the
 array and the length n upto which we want the array to
 be sorted*/
//  sort(arr, arr + n);

 for(int i = 0; i < =10; i++)
     {
         for(int j = 0; j < 10- i; j++)
             {
                 if(userInput[j] > userInput[j + 1])
                 {
                     int temp;
                     temp=userInput[j];
                     userInput[j]=userInput[j + 1];
                     userInput[j + 1]=temp;
                 }
             }
     }

 cout << "\nArray after sorting using "
   "default sort is : \n";
 for (int i = 0; i < n; ++i)
  cout << arr[i] << " ";

 return 0;
}
