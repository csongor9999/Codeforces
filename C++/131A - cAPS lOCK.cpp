#include <iostream>
using namespace std;
int main() {

    string txt;
    cin>>txt;

    int i=1;
    while(isupper(txt[i])) {
        i++;
    }

    if(i==txt.length()) {
        islower(txt[0]) ? txt[0] = toupper(txt[0]) : txt[0] = tolower(txt[0]);
        for (int i=1;i<txt.length();i++) {
            txt[i]  = tolower(txt[i]);
        }
    }

    cout<<txt;
    return 0;
}
