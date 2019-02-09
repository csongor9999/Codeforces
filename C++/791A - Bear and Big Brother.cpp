#include <iostream>
using namespace std;
int main() {

    int n,m;
    int j = 0;
    cin>>n>>m;

    while(n<=m) {
        n*=3;
        m*=2;
        j++;
    }

    cout<<j;



    return 0;
}
