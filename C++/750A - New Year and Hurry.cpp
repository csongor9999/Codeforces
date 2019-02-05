#include <iostream>
using namespace std;
int main() {

    int n,m;
    cin>>n>>m;
    int remain = 240;
    remain-=m;

    int i=0;
    while(remain-((i+1)*5)>=0 && n>0) {
        remain-=(i+1)*5;
        i++;
        n--;
    }

    cout<<i;

    return 0;
}
