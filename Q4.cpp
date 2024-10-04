#include<iostream>
using namespace std;

/*int main()
{
    char *str = "India vs Pakistan, Asia Cup 2023";
    str[7] = ’V’;
    double darr[] = {2.3, 4.5, 5.5};
    *(darr+3) = 6.5;
    extern float f;
    float g = f * 100.5;
    short int i = 89;void *v = &i;
    int *ip = static_cast<int*>(v);
    cout << "integer = " << *ip;
}*/

/*Explanation of the Runtime Errors and Rectifications:
1.String literals in C++ are stored in read-only memory. You are attempting to modify a string literal by assigning 'V' to str[7]. This causes undefined behavior and typically leads to a runtime error.
  So here we can use a mutable array of characters instead of a string literal:
  char str[] = "India vs Pakistan, Asia Cup 2023";

2.The array darr only has 3 elements (darr[0], darr[1], and darr[2]), but the statement *(darr + 3) = 6.5; attempts to write to darr[3], which is out of bounds. This results in undefined behavior.
  Either allocate more space in the array or ensure you access within bounds:
  double darr[] = {2.3, 4.5, 5.5, 0.0};
  *(darr + 3) = 6.5;

3.The extern declaration means f is declared elsewhere, but in this program, f has not been initialized. This leads to undefined behavior when you use f in the expression g = f * 100.5;.
  So initialize f in the program or provide a definition for f:
  float f = 1.0f;

4.v is a void* pointing to a short int, but it is being cast to an int*. This results in incorrect interpretation of the data, leading to undefined behavior.
  So either cast void* to short int* or declare i as an int in the first place:
  short int *ip = static_cast<short int*>(v);
*/

//RECTIFIED PROGRAMM: 
int main()
{
    // Use a mutable char array instead of a string literal
    char str[] = "India vs Pakistan, Asia Cup 2023";
    str[7] = 'V';
    // Ensure array bounds are respected
    double darr[] = {2.3, 4.5, 5.5, 0.0};
    *(darr + 3) = 6.5;
    float f = 1.0f;
    float g = f * 100.5;
    short int i = 89;
    void *v = &i;
    short int *ip = static_cast<short int*>(v);
    cout << "integer = " << *ip;
    return 0;
}
