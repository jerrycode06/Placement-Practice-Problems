#include <bits/stdc++.h>

using namespace std;
void printIntersection(int arr1[],int arr2[],int N, int M);

void printUnion(int arr1[],int arr2[],int N, int M)
{
	int i = 0,j=0;
	while(i<N && j<M)
	{
		if(arr1[i] == arr2[j]){
			cout<<arr1[i++]<<" ";
			j++;
		}
		else if(arr1[i] < arr2[j])
			cout<<arr1[i++]<<" ";
		else
			cout<<arr2[j++]<<" ";
	}

	while(i<N)
		cout<<arr1[i++]<<" ";
	while(j<M)
		cout<<arr2[j++]<<" ";
}

void printIntersection(int arr1[],int arr2[],int N, int M)
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			if(arr1[i] == arr2[j])
				cout<<arr1[i]<<" ";
		}
	}
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
		cout<<"Union is:-"<<endl;
		printUnion(arr1,arr2,N,M);
		cout<<endl;
		cout<<"Intersection is:-"<<endl;
		printIntersection(arr1,arr2,N,M);
	}
}