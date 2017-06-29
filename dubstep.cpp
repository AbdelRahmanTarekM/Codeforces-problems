#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    string song;
    cin>>song;
    string ini;
    bool wordend=false;
    for(int i=0;i<song.length();i++){
        if(song[i]=='W'&&song[i+1]=='U'&&song[i+2]=='B')
        {
            i=i+2;
            if(wordend){
                ini.append(1,' ');
                wordend=false;
            }
        }
        else 
        {
            ini.append(1,song[i]);
            wordend=true;
        }
    }
    cout<<ini;
    return 0;
}
