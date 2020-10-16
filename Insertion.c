#include<stdio.h>
void main()
{
    int a[50], size, i, num, pos;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    if (size > a[50])
    {
        printf("Overflow Condition\n");
    }
    else
    {  
        printf("Enter the elements of array\n");
        for (i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("Enter the new element\n");
        scanf("%d", &num);
        printf("Enter the index number where you want to insert");
        scanf("%d", &pos);
        if (pos<0 || pos>size)
        {
            printf("Overflow");
        }
        else
        {
            for (i = size; i >= pos; i--)
        {
            a[i+1] = a[i];
        }
        a[pos] = num;
        size++;

        printf("Elements of array are :\n");
        for (i = 0; i < size; i++)
        {
            printf("%d", a[i]);
        }
        
        }
    }
}