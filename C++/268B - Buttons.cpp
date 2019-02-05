#include <iostream>
using namespace std;
int main () {

    int n;
    cin>>n;
    int press = n;

    for (int i=1;i<=n;i++) {
        press+=i*(n-i);
    }

    cout<<press;

    return 0;
}
