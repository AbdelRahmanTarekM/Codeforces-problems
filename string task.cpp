#include <cstdlib>
#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
    locale loc;
    char vowels[]={'a','o','y','e','u','i'};
    bool isVowel;
    string s1;
    cin>>s1;
    for(int i=0;i<s1.length();i++)
    {
        isVowel=false;
        for(int j =0 ; j<6 ; j++)
        {
            if(tolower(s1[i])==vowels[j]){
                isVowel=true;
            }
        }
        if(!isVowel)
        cout<<"."<<tolower(s1[i],loc);
    }
    return 0;
}
