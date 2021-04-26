#include <bits/stdc++.h>

using namespace std;

int duplicate_num(int Hash[],int hash_size,int arr[],int n)
{
	for(int i = 0;i<n;i++)
		Hash[arr[i]]++;
	for (int i = 0; i< hash_size; i++)
	{
		if(Hash[i]>1)
			return i;
	}
	return -1;
}

int main()
{
	int n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter elements in Array"<<endl;
	for (int i = 0; i < n; ++i)
		cin>>arr[i];
	int hash_size = *max_element(arr,arr+n);
	int Hash[hash_size] = {0};
	cout<<"Duplicate Element is "<<duplicate_num(Hash,hash_size,arr,n);
	return 0;
}