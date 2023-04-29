#include<iostream>
using namespace std;
#include<vector>

vector<int> extendedGCD(int a, int b){
if(b==0) return {1,0};

vector<int>result=extendedGCD(b,a%b);
int x1=result[0];
int y1=result[1];

int x=y1;
int y=x1-(a/b)*y1;
return {x,y};

}

int main(){
	
	
	int a,b;
	//18x+12y=GCD(18,12);
	//ax+by=gcd(a,b);
	cin>>a;cin>>b;
	int x,y;
	vector<int>result=extendedGCD(a,b);
	cout<<result[0]<<" "<<result[1]<<endl;
	
}
