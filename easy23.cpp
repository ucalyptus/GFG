#include<bits/stdc++.h>
using namespace std;

bool areEqual(int a[],int b[],int n,int m){
	if(n!=m){
	return false;
	}

	else{
	sort(a,a+n);
	sort(b,b+n);
	}

	for(int  i =0;i<n;i++){
	if(a[i]!=b[i]){
	return false;

	}
	}

	return true;
}
int main() 
{ 
    int arr1[] = { 3, 5, 2, 5, 2}; 
    int arr2[] = { 2, 3, 5, 5, 2}; 
    int n = sizeof(arr1)/sizeof(int); 
    int m = sizeof(arr2)/sizeof(int); 
  
    if (areEqual(arr1, arr2, n, m)) 
        cout << "Yes"<<endl; 
    else
        cout << "No"<<endl; 
    return 0; 
} 