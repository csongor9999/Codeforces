#include <iostream>
#include <vector>
using namespace std;
int main() {

    int n,m;
    cin>>n>>m;
    vector <vector <string> > pairs(m,vector <string> (2));

    for(int i=0;i<m;i++) {
        cin>>pairs[i][0]>>pairs[i][1];
    }

    for(int i=0;i<n;i++) {
        string temp;
        cin>>temp;
        int j=0;
        while(j<m && temp!=pairs[j][0]) {
            j++;
        }

        if(pairs[j][0].length()<=pairs[j][1].length()) {
            cout<<pairs[j][0]<<" ";
        } else {
            cout<<pairs[j][1]<<" ";
        }
    }


    return 0;
}
