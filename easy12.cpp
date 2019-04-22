#include<bits/stdc++.h>
using namespace std;

int mostfreq(int arr[],int n){

	unordered_map<int,int> hash;
	for(int i =0;i<n;i++){
	hash[arr[i]]++;
	}

	int max_count = 0;
	int res = -1;
	for(auto i :hash)
		{

		if (max_count < i.second) 
		{ 
            res = i.first; 
            max_count = i.second; 
        } 
	}


	return res;

}

int main(){
	
	int a[]  ={4,3,4,4,2,4};
	int n  = sizeof(a)/sizeof(a[0]);
	int result = mostfreq(a,n);
	cout<<result<<endl;

	return 0;
}