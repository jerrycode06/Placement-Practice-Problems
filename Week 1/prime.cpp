#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
	if(n<=1)
		return false;
	for (int i = 2; i<=sqrt(n); i++){
				if(n%i == 0){
					return false;
				}
			}
	return true;
}

int main()
{
	int n,choice,flag = 0;
	cout<<"Enter a number"<<endl;
	cin>>n;
	cout<<"What you want to do? 1)Verify Prime 2) Print Prime Upto that number"<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			if(isPrime(n))
				cout<<"It is Prime";
			else
				cout<<"Not Prime";
			break;
		case 2:
			for(int i = 2; i<=n; i++){
				if(isPrime(i))
					cout<<i<<" ";
			}
			break;
	}
	return 0;
}