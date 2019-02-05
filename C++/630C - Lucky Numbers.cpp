#include <iostream>
using namespace std;
int main() {

    int n;
    long long db = 0;
    cin>>n;

    for(int i=1;i<=n;i++) {
        long long sv = 1;
        for(int j=1;j<=i;j++) {
            sv*=2;
        }
        db+=sv;
    }

    cout<<db;

    return 0;
}
