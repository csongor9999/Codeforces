#include <iostream>
using namespace std;
int main () {

    long long int n,m;
    cin>>n>>m;

    if (n%2==0) {
        m<=n/2 ? cout<<m+m-1 : cout<<m-(n-m);
    } else {
        m<=(n/2)+1 ? cout<<m+m-1 : cout<<m-(n-m)-1;
    }

    return 0;
}
