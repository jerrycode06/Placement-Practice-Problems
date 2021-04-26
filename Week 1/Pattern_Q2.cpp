#include <iostream>

using namespace std;

int main(){
    int lines;
    cout<<"Enter the number of lines"<<endl;
    cin>>lines;
    for(int row_loop = 1;row_loop <= lines; row_loop++){
        for(int col_loop = 1; col_loop <= lines; col_loop++){
            if(col_loop >= row_loop)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
*****
 ****
  ***
   **
    *
*/