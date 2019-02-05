#include <iostream>
using namespace std;
int main() {

    int n;
    cin>>n;
    int maxx = 0;

    for (int i=0;i<n;i++) {
        int sv1,sv2;
        cin>>sv1>>sv2;
        sv1+sv2>maxx ? maxx = sv1+sv2 : maxx;
    }

    cout<<maxx;

    return 0;
}
