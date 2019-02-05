#include <iostream>
#include <deque>
using namespace std;
int main() {

    int n,m;
    string text;
    deque <char> decode;
    cin>>n>>text;
    m = n;

    for(int i=0;i<n;i++) {
        if(m%2==1) {
            decode.push_back(text[i]);
        } else {
            decode.push_front(text[i]);
        }
        m--;
    }

    for(int i=0;i<n;i++) {
        cout<<decode[i];
    }

    return 0;
}
