
// find.cpp
// finds the first object with a specified value
#include <iostream>
#include <conio.h>
#include <algorithm>                   //for find()
using namespace std;

int arr[] = { 11, 22, 33, 44, 55, 66, 33, 88 };

int main()
   {
   int* ptr;
   ptr = find(arr, arr+8, 33);          //find first 33
   cout << "First object with value 33 found at offset "
        << (ptr-arr) << endl;
         getch();
   return 0;
   }
