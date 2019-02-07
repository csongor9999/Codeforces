#include <iostream>
#include <vector>
using namespace std;
int main() {

    int n;
    int maxL = 1;
    int aktL = 1;
    cin>>n;
    vector <int> money(n);

    for(int i=0;i<n;i++) cin>>money[i];

    for(int i=1;i<n;i++) {
        if(money[i]>=money[i-1]) {
            aktL++;
        } else {
            aktL = 1;
        }

        if(aktL>maxL) {
            maxL = aktL;
        }

    }

    cout<<maxL;



    return 0;
}
