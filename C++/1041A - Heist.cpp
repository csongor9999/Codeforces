#include <iostream>
#include <vector>
using namespace std;
int main () {

    int n;
    cin>>n;
    int maxi=0;
    long long int mini=1000000000;

    for (int i=0;i<n;i++) {
        int temp;
        cin>>temp;
        temp>maxi ? maxi=temp : temp;
        temp<mini ? mini=temp : temp;
    }

    cout<<(maxi-mini)-n+1;

    return 0;
}
