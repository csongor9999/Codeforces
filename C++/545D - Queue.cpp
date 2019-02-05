#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {

    int n;
    int akt=0;
    int db=0;
    priority_queue<int, vector<int>, std::greater<int> > arr;
    cin>>n;

    for(int i=0;i<n;i++) {
        int sv;
        cin>>sv;
        arr.emplace(sv);
    }

    while(arr.size()>0) {
        if(arr.top()>=akt) {
            akt+=arr.top();
            db++;
        }
        arr.pop();
    }

    cout<<db;

    return 0;
}
