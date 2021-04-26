#include <iostream>

using namespace std;

void reverse(int arr[],int n){
	int start = 0, end = n-1,temp;
	while(start<end){
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	for (int i = 0; i<n; i++)
		cout<<arr[i]<<" ";
}


int main()
{
	int n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements in Array"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	reverse(arr,n);
	return 0;
}