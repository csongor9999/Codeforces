#include <iostream>
using namespace std;
int main() {

    int n,m;
    cin>>n>>m;
    int db = 0;

    while(n>0 && m>0 && (n!=1 || m!=1)) {
        if(n<m) {
            n--;
            m-=2;
        } else {
            m--;
            n-=2;
        }
        db++;
    }

    cout<<db;

    return 0;
}
