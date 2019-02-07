#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum = 1;
    int it = 3;
    for(int i=1;i<n;i++) {
        sum+=it*6-6;
        it+=2;
    }
    cout<<sum;
}
