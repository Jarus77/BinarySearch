#include<iostream>
using namespace std;

int getIthBit(int n,int i){
	int mask=1<<i;  //101 & 100
	return (n&mask)>0 ?1 :0;	
}

int clearIthBit(int &n,int i){
	//101 & 011
	int mask = ~(1<<i);
	
	return n&mask;
}

void setIthBit(int& n,int i){
	//101 |010 =111
	int mask= 1<<i;
	n= n|mask;
	
}
void updateIthBit(int&n,int i,int val){
	//101 110
	clearIthBit(n,i);
	int mask= val<<i;
     n= n|mask;
	
}

void  clearLastibits(int&n,int i){
	//1010000111&1111111000=1010000000
	//mask= 1111000
	int mask=(-1)<<i;
	n= n&mask;
	
}
void clearBitsInRange(int&n,int i,int j){
	
	/*101100101 ->100000001 (i=2& j=6)
	101100101 & 110000011
	110000000 |000000011*/
	int a= -1<<j+1;
	int b= (1<<i)-1; //2^i-1;
	int mask=a|b;
     n= n&mask;
}
void replaceBitsInRange(int &n,int m,int i,int j){
	1011111101
	  011010
	1000000001
  | 0001101000
  
	clearBitsInRange(n,i,j);
	int mask=m<<i;
	n=n|mask;	
}



int main(){

	int y = 0;
//	cout << (~y) <<endl;
	//Left shift 1111 <<
	/* 5<<2 => 0000101<<2 =>0010100=20
	a<<b => a*2^b;

   // Right Shift >>
   10>>4 => 001010 >>4=00000
    a>>b =>a/2^b;
    */
  //Odd or Even
   int x;
   cin>>x;
   
   if(x&1){
   	cout<<"odd";
   }
   else cout<<"even";
  int n;cin>>n;int i;cin>>i;
  cout<<getIthBit(n,i)<<endl;
  cout<<clearIthBit(n,i)<<endl;
  cout<<setIthBit(n,i)<<endl;
  
  

	return 0;
}
