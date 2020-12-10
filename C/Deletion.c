#include<stdio.h>
void main()
{
    int a[50], size, i, pos;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    printf("Enter the elements of array\n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the index value which you want to delete\n");
    scanf("%d", &pos);
    if (pos < 0 || pos > size)
    {
        printf("Invalid Position");
    }
    
    else
    {
        for ( i = pos; i < size; i++)
        {
            a[i] = a[i+1]; 
        }

    size--;
    printf("Your elements are :\n");
        for ( i = 0; i < size; i++)
        {
            printf("%d", a[i]);
        }

    }
    
}