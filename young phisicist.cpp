#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    
    int n;
    cin>>n;
    int forces[n*3];
    int x=0,y=0,z=0;
    for(int i = 0 ; i < n * 3; i++){
        cin>>forces[i];
        if(i%3==0){
            x+=forces[i];
        }
        if(i%3==1){
            y+=forces[i];
        }
        if(i%3==2){
            z+=forces[i];
        }
    }
    if(x!=0 || y!=0 || z!=0){
        cout<<"NO";
    }
    else cout<<"YES";
    return 0;
}
