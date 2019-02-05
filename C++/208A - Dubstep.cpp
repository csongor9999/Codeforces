#include <iostream>
using namespace std;
int main() {

    string txt;
    string newTxt;
    bool space = false;
    cin>>txt;

    for(int i=0;i<txt.length();i++) {
        if (txt[i]!='W' || txt[i+1]!='U' || txt[i+2]!='B') {
            newTxt+=txt[i];
        } else {
            if(newTxt.length()!=0 && newTxt[newTxt.length()-1] != ' ') {
                newTxt+=' ';
            }
            i+=2;
        }
    }

    cout<<newTxt;


    return 0;
}
