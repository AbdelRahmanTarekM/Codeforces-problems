#include <iostream>
#include <cstdlib>
#include <complex>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int matrix[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>matrix[i][j];
        }
    }
    int row,col;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(matrix[i][j]==1){
                row=i;col=j;
            }
        }
    }
    cout<<abs(2-row)+abs(2-col);
    return 0;
}