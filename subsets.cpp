#include<iostream>
#include<cstring>
using namespace std;

void overLaynumber(char arr[],int number){

	int j = 0;

	while(number > 0){
		int last_bit = number & 1;
		if(last_bit){
			cout<<arr[j];
		}

		j++;
		number = number >> 1;
	}
	cout <<endl;
}


void generateAllSubsequences(char arr[]){

	int n = strlen(arr);

	for(int i=0; i < (1<<n);i++){
		overLaynumber(arr,i);
	}
	return;
}



int main(){
	//Subsets / Subsequences	
	char arr[10000];
	cin>> arr;
	generateAllSubsequences(arr);



}
/*#include<iostream>
using namespace std;
#include<cstring>


void solve(){
	char arr[1000];
	cin>>arr;	
	int n=strlen(arr);
	 
	 for(int i=0;i<(1<<n);i++){
	 	for(int j=0;j<n;j++){
	 		if((i>>j)&1) cout<<arr[j];
		 }
		 cout<<"\n";		 
	 }

	
	
		
}

int main(){
		solve();
}*/

