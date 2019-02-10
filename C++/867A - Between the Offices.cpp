#include <iostream>
using namespace std;
int main() {

    int n;
    string sv;
    cin>>n>>sv;
    int sf=0;
    int fs=0;

    for(int i=0;i<n-1;i++) {
        if (sv[i]=='S' && sv[i+1]=='F') {
            sf++;
        } else if (sv[i]=='F' && sv[i+1]=='S') {
            fs++;
        }
    }

    sf>fs ? cout<<"YES" : cout<<"NO";


    return 0;
}
