#include <iostream>
using namespace std;


int main () {

    int n,sum8=0;
    int db=0;
    string txt;
    cin>>n>>txt;

    for (int i=0;i<n;i++) {
        txt[i]=='8' ? sum8++ : sum8;
    }

    while(n>=11 && sum8>0) {
        sum8--;
        n-=11;
        db++;
    }

    cout<<db;



    return 0;
}
