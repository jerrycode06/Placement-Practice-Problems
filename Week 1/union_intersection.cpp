#include <bits/stdc++.h>

using namespace std;

void printUnion(int arr1[],int arr2[],int N, int M)
{
	int arr3[M+N],j=0,k=0;
	for(int i=0;i<M+N;i++){
		if(arr1[j] == arr2[k]){
			arr3[i] = arr1[j];
			j++;
			k++;
		}
		else if(arr1[j]<arr2[k])
		{
			arr3[i] = arr1[j];
			j++;
		}
		else{
			arr3[i] = arr2[k];
			k++;
		}
	}
	for(int i=0;i<M+N;i++)
			cout<<arr3[i];
}

int main()
{
	int T;
	cout<<"Enter Number of Test Cases"<<endl;
	cin>>T;
	while(T--)
	{
		int N,M;
		cout<<"Enter size of 1st and 2nd Array"<<endl;
		cin>>N>>M;
		int arr1[N],arr2[M];
		cout<<"Enter elements in 1st Array"<<endl;
		for(int i=0;i<N;i++)
			cin>>arr1[i];
		cout<<"Enter elements in 2nd Array"<<endl;
		for(int j=0;j<M;j++)
			cin>>arr2[j];
		printUnion(arr1[],arr2[],N,M);
	}
}