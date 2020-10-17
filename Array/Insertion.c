#include<stdio.h>
void main()
{
    int a[50], i, size, num, pos;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    if(size > a[50])
    {
        printf("Overflow condition");
    }
    else
    {
        printf("Enter the elements of array:\n");
        for (i=0 ; i<size; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("Enter the new element\n");
        scanf("%d", &num);
        printf("Enter the index number where to insert");
        scanf("%d", &pos);
        if (pos > size || pos < 0)
        {
            printf("Overflow condition");
        }
        else
        {
            for ( i = size; i >= pos; i--)
            {
                a[i+1] = a[i];
            }   
        a[pos] = num;
        size++;
        printf("Your array is :\n");
        for ( i = 0; i < size; i++)
        {
            printf("%d", a[i]);
        }
        }  
    }
}    