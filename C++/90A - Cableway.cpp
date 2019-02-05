#include <iostream>
#include <math.h>
using namespace std;
int main() {

    int r,g,b;
    cin>>r>>g>>b;

    if((r+1)/2>(g+1)/2 && (r+1)/2>(b+1)/2) {
        cout<<29+(r+1)/2*3-2;
    } else if((g+1)/2>=(r+1)/2 && (g+1)/2>(b+1)/2) {
        cout<<29+(g+1)/2*3-1;
    } else {
        cout<<29+(b+1)/2*3;
    }

    return 0;
}
