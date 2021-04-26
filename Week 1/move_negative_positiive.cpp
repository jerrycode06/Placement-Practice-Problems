#include <bits/stdc++.h>

using namespace std;

// void move_neg_pos(int arr[],int n)
// {
// 	int j = 0;
// 	for(int i = 0; i<n; i++)
// 	{
// 		if(arr[i]<0)
// 		{
// 			if(i != j)
// 				swap(arr[i],arr[j]);
// 			j++;
// 		}
// 	}
// }

void move_neg_pos(int arr[],int n)
{
	int left = 0, right = n-1;
	while(left<=right)
	{
		if(arr[left]<0 && arr[right]<0)
			left+=1;
		else if(arr[left]>0 && arr[right]<0){
			swap(arr[left],arr[right]);
			left+=1;
			right-=1;
		}
		else if(arr[left]<0 && arr[right]>0){
			left+=1;
			right-=1;
		}
		else
			right-=1;
	}
}

int main()
{
	int n;
	cout<<"Enter the size of Array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter elements in the array"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	move_neg_pos(arr,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}