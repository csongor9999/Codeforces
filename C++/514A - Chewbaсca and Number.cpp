#include <iostream>
using namespace std;
int main() {

    string txt;
    cin>>txt;

    for(int i=0;i<txt.length();i++) {
        if((int)txt[i] - '0' > 4 && (i>0 || (int)txt[0] - '0' <9)) {
            txt[i] = (9-((int)txt[i] - '0'))+ '0';
        }
    }

    cout<<txt;

    return 0;
}
