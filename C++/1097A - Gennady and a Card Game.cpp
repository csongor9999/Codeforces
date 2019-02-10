#include <iostream>
using namespace std;
int main() {

    string tbl,sv;
    bool van = false;
    cin>>tbl;

    for(int i=0;i<5;i++) {
        cin>>sv;
        if(sv[0]==tbl[0] || sv[1]==tbl[1]) {
            van = true;
        }
    }
    if(van == true) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }

    return 0;
}
