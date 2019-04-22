#include<bits/stdc++.h>
using namespace std;

int minoperation(int arr[],int n){

	unordered_map<int,int> hash;
	for(int i =0;i<n;i++){
	hash[arr[i]]++;
	}

	int max_count = 0;

	for(auto i = hash.begin();i!=hash.end();i++){
	max_count = max(max_count,i->second);
	}


	return (n-max_count);

}

int main(){
	
	int a[]  ={4,3,4,4,2,4};
	int n  = sizeof(a)/sizeof(a[0]);
	int result = minoperation(a,n);
	cout<<result<<endl;

	return 0;
}