#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int n;
    cin>>n;
    int colors[n*2];
    for(int i=0;i<n*2;i++){
        cin>>colors[i];
    }
    int counter=0;
    for(int i=0;i<n*2;i+=2){
        for(int j=1;j<n*2;j+=2){
            if(colors[i]==colors[j])
                counter++;
    }
    }
    cout<<counter;
    return 0;
}