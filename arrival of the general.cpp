#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int n;
    cin>>n;
    int sol[n],minpos,maxpos,min=101,max=0;
    for(int i=0;i<n;i++){
        cin>>sol[i];
        
    }
    for(int i =0 ; i<n;i++){
        if(sol[i]>max){
            max=sol[i];
            maxpos=i;
        }
        if(sol[i]<=min){
            minpos=i;
            min=sol[i];
        }
    }
    if(maxpos<minpos)
    cout<<maxpos+n-minpos-1;
    else cout<<maxpos+n-minpos-2;
    return 0;
}