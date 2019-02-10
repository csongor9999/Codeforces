#include <iostream>
using namespace std;
int main() {

    int n;
    int antn = 0;
    int dnk = 0;
    cin>>n;

    for(int i=0;i<n;i++) {
        char stat;
        cin>>stat;
        if(stat == 'A') {
            antn++;
        } else {
            dnk++;
        }
    }

    if(antn>dnk) {
        cout<<"Anton";
    } else if (antn<dnk) {
        cout<<"Danik";
    } else {
        cout<<"Friendship";
    }

    return 0;
}
