#include<iostream>
using namespace std;

int rec_gcd(int m, int n)
{
if (m%n ==0) return n;
return rec_gcd(n,m%n);
}

int LCM(int a,int b)
{
	if(a%b==0){
		return a;
	}
	else{
	int g=rec_gcd(a,b);
	int t=a/g;
	return b*t;
	
	}
	
}

int main()
{
	int a=15;
	int b=105;
	cout<<LCM(a,b);
	
	
}
