#include <iostream>
#include <set>
using namespace std;
int main() {
    set <string> arr;
    int n;
    cin>>n;

    for(int i=0;i<n;i++) {
        string sv;
        cin>>sv;
        if (arr.find(sv) == arr.end()) {
            cout<<"NO"<<endl;
            arr.insert(sv);
        } else {
            cout<<"YES"<<endl;
        }
    }
}
