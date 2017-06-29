#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin>>s;
    for(int i =0;i<s.length();i+=2){
        
        for(int j =i+2;j<s.length();j+=2){
            int y=s[j];int x=s[i];
            if(x>y){
            s[i]=y;
            s[j]=x;
        }
        }
    }
    cout<<s;
    return 0;
}