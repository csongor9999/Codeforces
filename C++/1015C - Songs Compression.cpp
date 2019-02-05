#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main() {

    long long int n,m;
    long long int ossz = 0;
    int needed = 0;
    priority_queue <int> diff;
    cin>>n>>m;

    for(int i=0;i<n;i++) {
        int sv1,sv2;
        cin>>sv1>>sv2;
        ossz+=sv1;
        diff.push(sv1-sv2);
    }

    int i=0;
    while(diff.size()>0 && ossz>m) {
        ossz-=diff.top();
        diff.pop();
        needed++;
        i++;
    }

    if(ossz<=m) {
        cout<<needed;
    } else {
        cout<<"-1";
    }



    return 0;
}
