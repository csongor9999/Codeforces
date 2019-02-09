#include <iostream>
using namespace std;
int main() {

    int n;
    int hard = 0;
    cin>>n;

    for(int i=0;i<n;i++) {
        int sv;
        cin>>sv;
        if (sv == 1) {
            hard++;
        }
    }

    hard ? cout<<"HARD" : cout<<"EASY";

    return 0;
}
