#include <iostream>

using namespace std;

int main(){
    int lines;
    cout<<"Enter the number of lines"<<endl;
    cin>>lines;
    for(int row_loop = 1;row_loop <= lines; row_loop++){
        for(int col_loop = 1; col_loop <= lines - row_loop; col_loop++)
            cout<<" ";
        for(int col_loop = 1; col_loop <= row_loop; col_loop++)
            cout<<col_loop<<" ";
        cout<<endl;
    }
    return 0;
}

/*
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*/