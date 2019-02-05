#include <iostream>
#include <string>
using namespace std;
int main() {

    int n;
    string text,sv;
    cin>>n>>text;

    for(int i=0;i<n;i++) {
        if(n%(i+1)==0) {
        sv="";
        for(int j=i;j>=0;j--) {
            sv+=text[j];
        }
        sv+=text.substr(i+1,n);
        text=sv;
        }
    }

    cout<<sv;

    return 0;
}
