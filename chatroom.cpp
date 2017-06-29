#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
    string s1;
    cin>>s1;
    int x1=0,x2=0;
    string hello = "hello";
    for(int i =0;i<4;i++){
        x1=s1.find(hello[i],x2);
        x2=s1.find(hello[i+1],x1+1);
        if(x1==-1 || x2==-1)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}

