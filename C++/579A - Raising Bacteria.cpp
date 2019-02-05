#include <iostream>
using namespace std;
int main() {

    int n;
    cin>>n;
    int db = 0;

    while(n>0) {
        int i=1;
        while(i*2<=n) {
            i*=2;
        }
        n-=i;
        db++;
    }

    cout<<db;

}
