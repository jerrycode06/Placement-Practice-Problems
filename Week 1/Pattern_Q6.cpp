#include <iostream>

using namespace std;

int main(){
    int lines;
    cout<<"Enter the number of lines"<<endl;
    cin>>lines;
    for(int row_loop = 1;row_loop <= lines; row_loop++){
        for(int col_loop = 1; col_loop <= row_loop; col_loop++){
        	if((row_loop + col_loop) % 2 == 0)
        		cout<<" 1";
        	else
        		cout<<" 0";
        }
        cout<<endl;
    }
    return 0;
}

/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/