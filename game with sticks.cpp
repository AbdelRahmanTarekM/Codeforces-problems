#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {

    int row , col;
    cin>>row>>col;
    int counter=0;
    while(row*col>0){
        row--;
        col--;
        counter++;
    }
    if(counter%2==0 ){
        cout<<"Malvika";
    }
    else cout<<"Akshat";
    return 0;
}