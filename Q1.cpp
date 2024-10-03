#include<iostream>
using namespace std;
int main()
{

//Pointer to a character:
   char ch = 'A';
   char* ptrToChar = &ch;

//Array of 10 integers:**
   int arr[10] = {10, 21, 42, 35, 84, 75, 46, 27, 8, 59};

//Reference to an array of 10 integers:**
   int (&RefToArray)[10] = arr;

//Pointer to an array of character strings:
   const char* StrArray[] = {"WELCOME", "TO", "IACS"};
   const char** PtrToStrArray = StrArray;

//Pointer to a pointer to a character:
   char* PtrToCharacter = &ch;
   char** PtrToPtrToCharacter = &PtrToCharacter;

//Constant integer:
   const int ConstInt = 42;

//Pointer to a constant integer:
   const int* PtrToConstInt = &ConstInt;

//Constant pointer to an integer:
   int num = 10;
   int* const ConstPtrToInt = &num;

//Constant pointer to a constant double:
   const double ConstDouble = 3.14;
   const double* const ConstPtrToConstDouble = &ConstDouble;

//Each variable is initialized with appropriate values or references.
}
