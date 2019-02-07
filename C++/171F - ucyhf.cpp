#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main() {

    int n;
    int maxN = 1000000;
    cin>>n;

    vector <bool> primes(maxN,true);
    set <int> emirps;
    set <int>::iterator it;
    for(int i=2;i*i<maxN;i++) {
        if(primes[i]) {
            for(int j=i;i*j<maxN;j++) {
                primes[i*j]=false;
            }
        }
    }

    for(int i=2;i<maxN;i++){
        if(primes[i]) {
            emirps.insert(i);
        }
    }

    int nth = 0;
    it = emirps.begin();
    while(nth!=n && it!=emirps.end()) {
        int sv = *it;
        int rev = 0;

        while(sv>0) {
           rev = rev*10+sv%10;
           sv/=10;
        }

        if(emirps.find(rev) !=emirps.end() && *it/10>0 && *it!=rev) {
            nth++;
        }
        it++;
    }
    cout<<*(--it);

    return 0;
}
