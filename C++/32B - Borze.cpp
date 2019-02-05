#include <iostream>
using namespace std;
int main () {

    string txt;
    cin>>txt;

    for(int i=0;i<txt.length();i++) {
        if(txt[i]=='.') {
            cout<<"0";
        } else if (txt[i]=='-' && txt[i+1]=='.') {
            cout<<"1";
            i++;
        } else {
            cout<<"2";
            i++;
        }
    }



    return 0;
}
