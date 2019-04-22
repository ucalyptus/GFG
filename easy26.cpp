#include<bits/stdc++.h>
#define ITERATE(i,p,n) for(int i =p;i<n;i++)
using namespace std;

void missing(int arr[],int n, int low,int high)
{
		
unordered_set<int> m;
ITERATE(i,0,n)
{

	m.insert(arr[i]);
}

ITERATE(x,low,high){
	if( m.find(x) == m.end() ){
	cout<<x<<" ";
	}
}


}


int main() 
{ 
   int arr[] = {1, 3, 5, 4}; 
   int n = sizeof(arr)/sizeof(arr[0]); 
   int low = 1, high = 10; 
   missing(arr, n, low, high); 
   return 0; 
} 