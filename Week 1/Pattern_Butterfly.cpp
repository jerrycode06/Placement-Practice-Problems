#include <iostream>

using namespace std;

int main(){
    int lines;
    cout<<"Enter the number of lines"<<endl;
    cin>>lines;
    for(int row_loop = 1;row_loop <= lines; row_loop++){
        for(int col_loop = 1; col_loop <= row_loop; col_loop++){
           cout<<"*";
        }
        int space = 2*lines - 2*row_loop;
        for(int col_loop = 1; col_loop <=space ; col_loop++)
            cout<<" ";
        for(int col_loop = 1; col_loop <= row_loop; col_loop++){
           cout<<"*";
        }
        cout<<endl;
    }
    for(int row_loop = lines;row_loop >= 1; row_loop--){
        for(int col_loop = 1; col_loop <= row_loop; col_loop++){
           cout<<"*";
        }
        int space = 2*lines - 2*row_loop;
        for(int col_loop = 1; col_loop <= space; col_loop++)
            cout<<" ";
        for(int col_loop = 1; col_loop <= row_loop; col_loop++){
           cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

/*
*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *

*/