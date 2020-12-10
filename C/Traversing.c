#include<stdio.h>
void main()
{
    int a[50], size, i;
    printf("Enter the size of array:\n");
    scanf("%d", &size);
    printf("Enter the elements of array:\n");
    for (int i = 0; i < size ; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements of array are:\n");
    for (int i = 0; i < size ; i++)
    {
        printf("%d", a[i]);
    }
}