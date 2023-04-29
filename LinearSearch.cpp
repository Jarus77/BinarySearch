#include<iostream>
using namespace std;
\
bool LinearSearch(int*a, int n){	
	for(int i=0;i<a.size();i++) if(a[i]==n) return true;
	
	return false;
}
