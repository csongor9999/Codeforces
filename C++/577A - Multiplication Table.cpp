#include <iostream>
using namespace std;
int main() {

    int n,m;
    int db = 0;
    cin>>n>>m;

    for(int i=1;i<=n;i++) {
        if(m/i<=n && m/i*i==m) {
            db++;
        }
    }

    cout<<db;

    return 0;
}
