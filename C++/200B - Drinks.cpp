#include <iostream>
using namespace std;
int main() {

    int n;
    float sum=0;
    cin >>n;
    for(int i=0;i<n;i++) {
        int sv;
        cin>>sv;
        sum+=sv;
    }

    cout<<sum/n;

    return 0;
}
