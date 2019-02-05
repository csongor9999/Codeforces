#include <iostream>
using namespace std;
int main() {

    int n;
    int ossz = 0;
    int maxE = 0;
    cin>>n;

    for(int i=0;i<n;i++) {
       int sv;
       cin>>sv;
       ossz+=sv;

       if(sv>maxE) {
        maxE = sv;
       }
    }

    cout<<maxE*n-ossz;

    return 0;
}
