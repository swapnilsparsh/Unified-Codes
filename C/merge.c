#include <stdio.h>
#include <conio.h>
void main()
{
  int A[20], B[20], C[40], n1;
  int i, j, k, n2;
  printf("Enter size of both the arrays \n");
  scanf("%d", &n1);
  scanf("%d", &n2);
  printf("Enter elements of 1st array\n");

  for (i = 0; i <= n1 - 1; i++)
  {
    scanf("%d", &A[i]);
  }
  printf("Enter elements of 2nd array\n");
  for (j = 0; j <= n2 - 1; j++)
  {
    scanf("%d", &B[j]);
  }
  i = 0;
  j = 0;
  k = 0;
  while (i < n1 && j < n2)
  {
    if (A[i] <= B[j])
    {
      C[k] = A[i];
      i++;
      k++;
    }
    else
    {
      C[k] = B[j];
      k++;
      j++;
    }
  }
  while (i < n1)
  {
    C[k] = A[i];
    i++;
    k++;
  }
  while (j < n2)
  {
    C[k] = B[j];
    k++;
    j++;
  }
  printf("\nMerged array is :");
  for (i = 0; i < n1 + n2; i++)
  {
    printf("%d ", C[i]);
  }
}