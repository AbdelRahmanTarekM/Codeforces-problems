#include<iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int x,y,z;
    cin >> x>>y>>z;
    if(x==y==z==1){
        cout<<3;
        return 0;
    }
    
    if(x==1){
        if(y==1 &&z!=1){
            cout<<2*z;
            return 0;
        }
        if(z==1){
            cout<<x+y+z;
            return 0;
        }
        cout<<(x+y)*z;
        return 0;
    }
    if(y==1){
        if(z==1){
            cout<<2*x;
            return 0;
        }
        int r1=(x+y)*z,r2=x*(y+z);
        if(r1>r2){
            cout<<r1;
            return 0;
        }
        else cout<<r2;
        return 0;
    }
    if(z==1){
        cout<<x*(y+z);
        return 0;
    }
    cout<<x*y*z;
    
    return 0;
}