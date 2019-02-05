#include <iostream>
using namespace std;
int main() {

    string a,b,text;
    cin>>a>>b>>text;

    for(int i=0;i<text.length();i++) {
        int j=0;
        while(j<a.length() && tolower(text[i]) != a[j]) {
            j++;
        }

        if(j!=a.length()) {
            if(text[i] == toupper(text[i])) {
                cout<<(char)toupper(b[j]);
            } else {
                cout<<b[j];
            }
        } else {
            cout<<text[i];
        }
    }


}
