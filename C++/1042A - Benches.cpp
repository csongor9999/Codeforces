#include <iostream>
#include <vector>
using namespace std;
int main () {

    int n,m,maxx=0,maxx2=0;
    vector <int> tomb;
    cin>>n>>m;
    for (int i=0;i<n;i++) {
        int sv;
        cin>>sv;
        sv>maxx ? maxx = sv : sv;
        tomb.push_back(sv);
    }

    for (int i=0;i<m;i++) {
        int minn=tomb[0];
        int minindex = 0;
        for (int j=0;j<n;j++) {
            tomb[j]<minn ? minn = tomb[j], minindex = j : minn;
        }

        tomb[minindex]++;
    }

    for (int i=0;i<n;i++) {
        tomb[i]>maxx2 ? maxx2 = tomb[i] : maxx2;
    }

    cout<<maxx2<<" "<<maxx+m;

    return 0;
}
