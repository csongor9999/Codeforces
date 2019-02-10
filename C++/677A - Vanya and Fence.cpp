#include <iostream>
using namespace std;
int main() {

    int n,h;
    int db = 0;
    cin>>n>>h;
    for(int i=0;i<n;i++) {
        int sv;
        cin>>sv;
        sv>h ? db+=2 : db++;
    }

    cout<<db;

    return 0;
}
