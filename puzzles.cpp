#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    
    int n,m;
    cin>>n>>m;
    int puzzles[m];
    for(int i =0 ; i<m;i++){
        cin>>puzzles[i];
    }
    sort(puzzles,puzzles+m);
    int least = puzzles[n-1]-puzzles[0];
    for(int i = 0 ; i<=m-n;i++){
        if(puzzles[i+n-1]-puzzles[i]<least)
            least=puzzles[i+n-1]-puzzles[i];
    }
    cout<<least;
    return 0;
}
