#include <iostream>
using namespace std;
int main () {

    int n;
    long long int j=0;
    bool start = false;
    long long int step=0;
    cin>>n;

    for (int i=0;i<n;i++) {
        long long int sv;
        cin>>sv;
        start && sv==1 ? step*=j, j=1 : j++;
        start == false ? j=1 : j;
        sv==1 && start!=true ? start=true, step=1 : start;
    }

    cout<<step;


    return 0;
}
