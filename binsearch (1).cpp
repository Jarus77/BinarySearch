#include<simplecpp>

int rec_binsearch (int* A, int left, int right, int q)
{
if (left > right) return -1;
int mid = (right-left+1)/2;
if (A[mid] == q) return mid;
if (q < A[mid]) { cout << left << " " << mid-1 << endl; return rec_binsearch(A,left,mid-1,q); }// first half of A
if (q > A[mid]) { cout << mid+1 << " " << right << endl; return rec_binsearch(A,mid+1,right,q); } // second half of A
}

int binsearch (int* A, int left, int right, int q)
{
    while (left <= right)
    {
        int mid = (left+right)/2;
        if (A[mid] == q) return mid;
        if (q < A[mid]) right = mid-1;
        if (q > A[mid]) left = mid+1;
    }
    return -1;
}


main_program{
int A[100];
int n,q;

cout << "Enter the number of numbers: "; cin >> n;

for (int i= 0; i < n; i++)
{
    cout << endl << "Enter the next number in sorted order: ";
    cin >> A[i];
}

cout << endl << "Enter the query number: "; cin >> q;

int ind = binsearch(A,0,n-1,q);
cout << "The query number lies at " << ind;

}
