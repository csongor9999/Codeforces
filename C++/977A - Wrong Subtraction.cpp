#include <iostream>
using namespace std;
int main() {

    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++) {
        n%10==0 ? n/=10 : n--;
    }

    cout<<n;

}
