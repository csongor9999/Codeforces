#include <iostream>
using namespace std;
int main() {

    string txt;
    int lower = 0;
    int upper = 0;
    cin>>txt;

    for (int i=0;i<txt.length();i++) {
        islower(txt[i]) ? lower++ : upper++;
    }

    if (lower>=upper) {
        for (int i=0;i<txt.length();i++) {
            txt[i] = tolower(txt[i]);
        }
    } else {
        for (int i=0;i<txt.length();i++) {
            txt[i] = toupper(txt[i]);
        }
    }

    cout<<txt;

    return 0;
}
