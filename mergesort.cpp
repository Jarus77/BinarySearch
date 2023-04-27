#include<iostream>
using namespace std;

int sp = 0;

void printArray(int *A, int n)
{
    cout << endl;
    for(int i = 0; i < n; i++) cout << " " << A[i];
}


void merge(int *A, int *B1, int *B2, int n1, int n2){
int cB1, cB2, cA;

cB1 = cB2 = cA = 0; // counters for B1,B2,A respectively
while (cB1 < n1 && cB2 < n2){
	// copy an element from B1 to A as B1 has the smaller element
	if (B1[cB1] < B2[cB2]) A[cA++] = B1[cB1++];
	// copy an element from B2 to A as B2 has the smaller element
	else if (B1[cB1] > B2[cB2]) A[cA++] = B2[cB2++];
	// both have equal-valued elements, copy from both to A
	else { A[cA++] = B1[cB1++]; A[cA++] = B2[cB2++];}
}
// at most one of the following two while loops will be entered (why?)
// copy the remaining elements from  either B1 or B2 to A
while(cB1 < n1) A[cA++] = B1[cB1++];
while(cB2 < n2) A[cA++] = B2[cB2++];

}


void mergesort (int *A, int n){
if (n > 1)
{
		int B1[n/2], B2[n-n/2];
		sp += n;
        for (int i=0;i<n/2;i++) B1[i] = A[i];
        for (int i=n/2;i<n;i++) B2[i-n/2] = A[i];

        mergesort(B1,n/2);
        mergesort (B2,n-n/2);
        merge(A,B1,B2,n/2,n-n/2); printArray(A,n);

}
}


int main()
{
    int i,n,A[1000];

    cout << "enter the number of numbers: "; cin >> n; cout << endl;

    for (i=0;i<n;i++)
    {
        cout << "Enter the next number: "; cin >> A[i]; cout << endl;
    }

    mergesort (A,n);
    printArray(A,n);

    cout << endl << "sp = " << sp;
}
