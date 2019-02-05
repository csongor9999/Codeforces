#include <iostream>
#include <vector>
using namespace std;
int main() {

    int n;
    cin>>n;
    vector <int> divisors(n);
    int maxN = 0;
    int maxN2 = 0;

    for(int i=0;i<n;i++) {
        cin>>divisors[i];
        if(divisors[i]>maxN) {
            maxN = divisors[i];
        }
    }

    cout<<maxN<<" ";

    for(int i=1;i<=maxN;i++) {
        if(maxN%i==0) {
            int j=0;
            while(j<divisors.size() && divisors[j]!=i) {
                j++;
            }
            if(j!=n) {
                divisors[j]=0;
            }
        }
    }

    for(int i=0;i<divisors.size();i++) {
        if(divisors[i]>maxN2) {
            maxN2 = divisors[i];
        }
    }

    cout<<maxN2;



}
