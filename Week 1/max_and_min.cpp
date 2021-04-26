#include <bits/stdc++.h>

using namespace std;
void max_min_stl(int arr[],int n);

void max_min(int arr[],int n)
{
	int max,min;
	max = min = arr[0];
	if(n == 2){
		if(arr[0] < arr[1]){
			max = arr[1];
			min = arr[0];
		}
		else{
			max = arr[0];
			min = arr[1];
		}
	}
	else if(n > 2){
		for (int i = 1; i<n; i++){
			if(arr[i]>max)
				max = arr[i];
			else if(arr[i]<min)
				min = arr[i];
		}
	}
	cout<<"Maximum "<<max<<" and Minimum "<<min<<endl;	
}

int main()
{
	int n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements in the array"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	max_min(arr,n);
	max_min_stl(arr,n);
	return 0;
}

void max_min_stl(int arr[],int n)
{
	cout<<"Max Using STL "<<*max_element(arr,arr+n)<<endl;
	cout<<"Min Using STL "<<*min_element(arr,arr+n);
}