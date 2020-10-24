#include<stdio.h>
#include<conio.h>
void main()
{
        int a[50],i,siz,p,val;
        printf("Enter the size of an array\n");
        scanf("%d",&siz);
        printf("Enter the number of elements\n");
        for (i = 0; i<siz; i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Enter the position you want to insert\n");
        scanf("%d",&p);
        printf("Enter the value you want to insert\n");
        scanf("%d",&val);
        for(i=siz-1; i<=p-1;i++)
        {
            a[i+1] = a[i];
        }
        a[p-1] = val;
        siz++;
        for(i = 0; i<siz; i++)
        {
            printf("The array is: %d \n", a[i]);
        }
}