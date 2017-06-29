#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1,s2;
    int l1=0,l2=0,result=0;
    cin>>s1;
    cin>>s2;
    for(int i=0;i<s1.length();i++){
        l1=tolower(s1[i]);
        l2=tolower(s2[i]);
        if(l1>l2){
            result=1;
            break;
        }
        if(l2>l1){
            result=-1;
            break;
        }
    }
    cout<<result;
    return 0;
}