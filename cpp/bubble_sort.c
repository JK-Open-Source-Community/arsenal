//bubble sort is stable (order of elements is retained) and non-adaptive
// O(n^2)
#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void bubbleSort(int *A, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++) //passes
    {
        printf("pass: %d \n",i+1);
        for (int j = 0; j < n - 1 - i; j++) //comparisions
        {
            if (A[j] > A[j + 1])
            {
                //swap
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }

        }
    }
}

void bubbleSortAdaptive(int *A, int n)
{
    int temp;
    int isSorted; //for making bubble sort adaptable
    for (int i = 0; i < n - 1; i++) //passes
    {
        printf("pass: %d \n",i+1);
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++) //comparisions
        {
            if (A[j] > A[j + 1])
            {
                //swap
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                isSorted = 0;
            }

        }
        if (isSorted){
            return; //ends the function
        }
    }
}
int main()
{
    int n = 6;
    int A[] = {12, 54, 65, 7, 23, 9};
    //int A[] = {1, 4, 5, 7, 23, 29};
    
    printArray(A, n);
    bubbleSort(A, n);
    printArray(A, n);
    bubbleSortAdaptive(A, n);
    printArray(A, n);

    return 0;
}
