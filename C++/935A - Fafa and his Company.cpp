#include <iostream>
using namespace std;
int main() {

    int n;
    int db = 0;
    cin>>n;

    for(int i=1;i<=n/2;i++) {
        if((n-i)%i==0) {
            db++;
        }
    }

    cout<<db;

    return 0;
}
