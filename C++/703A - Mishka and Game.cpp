#include <iostream>
using namespace std;
int main() {

    int n;
    int M = 0;
    int C = 0;
    cin>>n;

    for(int i=0;i<n;i++) {
        int s1,s2;
        cin>>s1>>s2;
        if(s1>s2) {
            M++;
        } else if (s2>s1) {
            C++;
        }
    }

    if(M>C) {
        cout<<"Mishka";
    } else if (C>M) {
        cout<<"Chris";
    } else {
        cout<<"Friendship is magic!^^";
    }

    return 0;
}
