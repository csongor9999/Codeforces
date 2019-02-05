#include <iostream>
#include <math.h>
using namespace std;
int main () {

    int n;
    int zero = 0;
    int one = 0;
    string txt;
    cin>>n>>txt;

    for (int i=0;i<n;i++) {
        txt[i]=='1' ? one++ : zero++;
    }

    cout<<abs(one-zero);

    return 0;
}
