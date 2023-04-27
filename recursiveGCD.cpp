#include<iostream>
using namespace std;

int rec_gcd(int m, int n)
{
if (m%n ==0) return n;
return rec_gcd(n,m%n)
}

