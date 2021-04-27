#include<iostream>
using namespace std;
void swap(int* a,int* b);
void bubble_sort(int arr[],int n){
    int counter=1;
    while(counter<n-1){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                swap(&arr[i],&arr[i+1]);
            }
        }
        counter++;
    }
}

void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  bubble_sort(arr,n);
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
  }
  return 0;
}