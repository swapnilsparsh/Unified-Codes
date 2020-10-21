#include<stdio.h>
void main()
{
    int a[10], size, i;
    int *ptr = a;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    if (size > 10)
    {
        printf("Overflow");
    }
    else
    {
        printf("Enter the elements of array\n");
        for ( i = 0; i < size; i++)
        {
           scanf("%d", &ptr[i]); 
        }
        printf("Your elements in array are:\n");
        for ( i = 0; i < size; i++)
        {
            printf("%d", i[ptr]);
        }
    }
}