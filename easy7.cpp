#include<bits/stdc++.h>
using namespace std;


int maxdist(int arr[],int n){


unordered_map<int,int> chuu;
int maxdis = 0;

//An efficient solution for this problem is to use hashing. The idea is 
//to traverse input array and store index of first occurrence in a hash map.
 //For every other occurrence, find the difference between index and the
 // first index stored in hash map. If difference is more than result so far, 
//then update the result.



for(int i = 0;i<n;i++){
if(chuu.find(arr[i])==chuu.end())

	chuu[arr[i]] = i;
//
else

	maxdis = max(maxdis,i-chuu[arr[i]]);
}

	return maxdis;
}
int main(){
	
	int a[]  ={3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2};
	int n  = sizeof(a)/sizeof(a[0]);
	int result = maxdist(a,n);
	cout<<result<<endl;

	return 0;
}