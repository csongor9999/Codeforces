#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

    ios_base::sync_with_stdio(false);
    int n,m;
    long long int ossz = 0;
    cin>>n>>m;
    vector <long long int> num(n);
    vector <long long int> seq(n+1);

    for(int i=0;i<n;i++) {
        cin>>num[i];
    }

    for(int i=0;i<m;i++) {
        int l,r;
        cin>>l>>r;
        seq[l-1]+=1;
        seq[r]-=1;
    }


    for(int i=1;i<n;i++) {
        seq[i]+=seq[i-1];
    }

    cout<<endl;

    sort(num.rbegin(),num.rend());
    sort(seq.rbegin(),seq.rend());


    for(int i=0;i<n;i++) {
        ossz+=num[i]*seq[i];
    }

    cout<<ossz;




    return 0;
}
