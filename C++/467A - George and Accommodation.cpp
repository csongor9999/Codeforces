#include <iostream>
using namespace std;
int main () {

    int n;
    cin>>n;
    int sum = 0;
    int a,b;

    for (int i=0;i<n;i++) {
        cin>>a>>b;
        b-a>=2 ? sum++ : sum;
    }

    cout<<sum;

    return 0;
}
