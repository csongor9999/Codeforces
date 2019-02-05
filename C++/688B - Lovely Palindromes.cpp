#include <iostream>
using namespace std;
int main() {

    ios_base::sync_with_stdio(false);
    string n;
    string sv="";
    cin>>n;

    for (int i=n.length()-1;i>=0;i--) {
        sv+=n[i];
    }

    cout<<n+sv;
    return 0;
}
