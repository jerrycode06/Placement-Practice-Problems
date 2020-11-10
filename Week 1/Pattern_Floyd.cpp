#include <iostream>

using namespace std;

int main(){
    int lines,count = 1;
    cout<<"Enter the number of lines"<<endl;
    cin>>lines;
    for(int row_loop = 1;row_loop <= lines; row_loop++){
        for(int col_loop = 1; col_loop <= row_loop; col_loop++){
           cout<<count<<" ";
           count++;
        }
        cout<<endl;
    }
    return 0;
}

/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/