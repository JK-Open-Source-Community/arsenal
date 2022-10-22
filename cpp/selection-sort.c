// not stable nor adaptive
// select minimum element and keep shifting to left ( swap )
#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selectionSort(int *A, int n)
{
    int indexOfMin, temp;
    for (int i = 0; i < n - 1; i++)
    {
        indexOfMin = i;
        for (int j = i+1; j < n; j++)
        {
            if(A[j]< A[indexOfMin]){
                indexOfMin = j;
            }
        }

        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
        
    }
}

int main()
{
    // 00  01  02  03  04
    // 03, 05, 02, 13, 02
    int n = 5;
    int A[] = {3, 5, 2, 13, 2};
    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);

    return 0;
}
