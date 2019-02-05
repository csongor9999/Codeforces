#include <iostream>
using namespace std;
int main() {

    int n;
    string txt;
    int db = 0;
    cin>>n>>txt;
    int i=0;
    while(i+2!=n) {
        if(txt[i]=='x' && txt[i+1]=='x' && txt[i+2]=='x') {
                db++;
        }
        i++;
    }

    cout<<db;

    return 0;
}
