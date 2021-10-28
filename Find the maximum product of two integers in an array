#include <stdio.h>
#include <limits.h>
 
// A naive solution to finding the maximum product of two integers
// in an array
void findMaximumProduct(int arr[], int n)
{
    // base case
    if (n < 2) {
        return;
    }
 
    int max_product = INT_MIN;
    int max_i, max_j;
 
    // consider every pair of elements
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // update the maximum product if required
            if (max_product < arr[i] * arr[j])
            {
                max_product = arr[i] * arr[j];
                max_i = i, max_j = j;
            }
        }
    }
 
    printf("Pair is (%d, %d)", arr[max_i], arr[max_j]);
}
 
int main()
{
    int arr[] = { -10, -3, 5, 6, -2 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    findMaximumProduct(arr, n);
 
    return 0;
}
