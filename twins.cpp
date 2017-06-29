#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;


int main() {
    int n,total=0,count=0 , s=0;
    cin>>n;
    int a[n];
    for(int i =0 ; i<n;i++){
        cin>>a[i];
        total+=a[i];
    }
    sort(a,a+n);
    for(int i = n-1 ; i>=0 ; i--){
        
        if(s>total/2)
            break;
        s+=a[i];
        count++;
    }
    cout<<count;
    return 0;
}
