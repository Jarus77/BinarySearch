#include<iostream>
using namespace std;

int main()
{
int m,n;
cout << "Enter the positive numbers (largest first): "; cin >> m >> n;
while (m%n !=0)
{
	int remainder = m%n;
	m = n;
	n = remainder; //if n does not divide m, GCD(m,n) = GCD(n,m%n)
}
cout << "Their GCD is: " << n; // if n divides m, GCD(m,n) = n
}
