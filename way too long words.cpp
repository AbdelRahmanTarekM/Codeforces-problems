#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    string s1[n];
    for(int i=0 ; i<n;i++){
        cin>>s1[i];
    }
    for(int i =0 ; i<n;i++){
        if(s1[i].length()>10){
            cout<<s1[i][0]<<s1[i].length()-2<<s1[i][s1[i].length()-1]<<endl;
        }
        else cout<<s1[i]<<endl;
    }
    return 0;
}