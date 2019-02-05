#include <iostream>
using namespace std;
int main () {

    string t,s;
    cin>>t>>s;
    int i = t.length();

    while(t[i-1]==s[s.length()-i] && i>0) {
        i--;
    }

    i==0 ? cout<<"YES" : cout<<"NO";

    return 0;
}
