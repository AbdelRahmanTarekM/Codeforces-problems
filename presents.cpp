#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;
    int i1[n];
    for(int i =0 ; i<n;i++){
        cin >> i1[i];
    }
    int i2[n];
    for (int i=0;i<n;i++){
        i2[i1[i]-1]=i+1;
    }
    for(int i =0 ; i <n;i++){
        cout<<i2[i]<<" ";
    }
}
