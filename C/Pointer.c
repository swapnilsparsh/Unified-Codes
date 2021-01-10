#include<stdio.h>
void main()
{
    int a[] = {11, 22, 33, 44, 55}, *ptr;
    ptr = a;
    printf("%d\n", ptr);                    // address of a array 
    printf("%d\n", a + 1);                  // address will be increment by +4 in the base address
    printf("%d\n", &a +1);                  // address will be increment by +4 in the total address of the array
    printf("%d\n", 4[a]);                   // alternate method to print the value of array at particular index value
    printf("%d\n", 4[ptr]);                 // alternate method to print the value of array at particular index value using pointer
    printf("%d\n", *a);                     // print the value stored in base address of array
    printf("%d\n", *a +1);                  // increment the value by 1 in the base address and then print it 
    printf("%d\n", *(a+1));                 // increment the index value by 1 and then print the value stored in it
}