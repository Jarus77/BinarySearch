#include<iostream>
using namespace std;

void printArray(int *A, int n)
{
    cout << endl;
    for(int i = 0; i < n; i++) cout << " " << A[i];
}

void swap (int*a, int*b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition (int *A, int low, int high)
{
    int i,j;
    int pivot = A[high]; // last element is the pivot

    i = low-1;
    for(j=low;j<=high-1;j++)
    {
        if (A[j] < pivot)
        {
            i++;
            swap(&A[i],&A[j]);
        }
    }
    swap(&A[high],&A[i+1]);
    return i+1;
}

void quicksort (int *A, int low, int high)
{
    if (high - low < 1) return;
    int pivotindex;

    pivotindex = partition(A,low,high);
    quicksort(A,low,pivotindex-1);
    quicksort(A,pivotindex+1,high);
}


int main()
{
    int i,n,A[1000];

    cout << "enter the number of numbers: "; cin >> n; cout << endl;

    for (i=0;i<n;i++)
    {
        cout << "Enter the next number: "; cin >> A[i]; cout << endl;
    }

    quicksort (A,0,n-1);
    printArray(A,n);
}
