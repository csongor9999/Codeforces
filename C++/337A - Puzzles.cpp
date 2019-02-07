#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

    int n,m;
    cin>>n>>m;
    vector <int> puzzles(m);

    for(int i=0;i<m;i++) {
        cin>>puzzles[i];
    }

    sort(puzzles.begin(),puzzles.end());
    int minDiff = 1000;

    for(int i=0;i<=m-n;i++) {
       if(puzzles[i+n-1]-puzzles[i]<minDiff) {
            minDiff = puzzles[i+n-1]-puzzles[i];
       }
    }

    cout<<minDiff;

    return 0;
}
