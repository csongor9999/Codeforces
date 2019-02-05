#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main(){

    int n,x,y;
    cin>>n>>x>>y;
    int db = 0;
    multiset <int> doors;
    multiset <int>::iterator it;

    for(int i=0;i<n;i++) {
        int sv;
        cin>>sv;
        doors.insert(sv);
    }


    int j=0;
    while(j<1000 && db!=n) {
        it = doors.begin();
        if(*it-x==0) {
            db++;
            doors.erase(it);
            it = doors.begin();
            doors.insert(*it+y);
            doors.erase(it);
        }
    }



    return 0;
}
