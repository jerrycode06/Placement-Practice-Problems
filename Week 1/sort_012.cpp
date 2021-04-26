#include <bits/stdc++.h>
using namespace std; 

void sort012(int arr[],int n)
{
	//sort(arr,arr+n);
	int count0 = 0,count1 = 0,count2 = 0;
	for(int i = 0;i<n;i++){
		if(arr[i] == 0)
			count0++;
		else if(arr[i] == 1)
			count1++;
		else
			count2++;
	}
	for (int i = 0;i<count0;i++)
		arr[i] = 0;
	for (int i = count0; i < (count0+count1); i++)
		arr[i] = 1;
	for (int i = (count0+count1); i<n; i++)
		arr[i] = 2;

	cout<<"After Sorting"<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int main()
{
	int T,n;
	cout<<"Enter number of Test Cases"<<endl;
	cin>>T;
	while(T--)
	{
		cout<<"Enter the size of array"<<endl;
		cin>>n;
		int arr[n];
		cout<<"Enter elements- 0,1,2 in array"<<endl;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		sort012(arr,n);
	}
	return 0;
}