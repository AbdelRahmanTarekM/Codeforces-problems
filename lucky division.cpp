#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int n;
    cin >> n;
    if(n%4==0){
        cout<<"YES";
        return 0;
    }
    if(n%7==0){
        cout<<"YES";
        return 0;
    }
    if(n%47==0){
        cout<<"YES";
        return 0;
    }
    if(n/1000==0 || n/1000==4 || n/1000==7){
        if((n%1000)/100==0 || (n%1000)/100==4 || (n%1000)/100==7){
            if((n%100)/10==0 || (n%100)/10==4 || (n%100)/10==7){
                if(n%10==4 || n%10==7){
                    cout<<"YES";
                    return 0;
                }
            }
        }
    }
    cout<<"NO";
    return 0;
}