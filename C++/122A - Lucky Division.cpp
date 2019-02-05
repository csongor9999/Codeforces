#include <iostream>
using namespace std;
int main () {

    string n;
    cin>>n;

    if (stoi(n)%7==0 || stoi(n)%4==0 || stoi(n)%47==0 || stoi(n)%74==0 || stoi(n)%477==0) {
        cout<<"YES";
    } else {
        int i = 0;
        while (i<n.length() && ((int)n[i]-48 == 7 || (int)n[i]-48 == 4)) {
            i++;
        }
        if (i<n.length()) {
            cout<<"NO";
        } else {
            cout<<"YES";
        }
    }

    return 0;
}
