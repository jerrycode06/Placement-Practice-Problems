#include <bits/stdc++.h>
using namespace std;

int kth_greatest(int arr[],int n,int k);

int kth_smallest(int arr[],int n,int k)
{
	sort(arr,arr+n);
	return arr[k-1];
}

int kth_greatest(int arr[],int n,int k){
	sort(arr,arr+n,greater<int>());
	return arr[k-1];
}


int main()
{
	int T,k,n;
	cout<<"Number of Test Cases, size of array and kth number"<<endl;
	cin>>T>>n>>k;
	int arr[n];
	for(int i = 1; i<=T; i++){
	cout<<"Enter elements in array"<<endl;
	for(int j=0;j<n;j++)
		cin>>arr[j];
	cout<<"kth smallest: "<< kth_smallest(arr,n,k)<<endl;
	cout<<"kth_greatest: "<<kth_greatest(arr,n,k)<<endl;
	}
	return 0;
}