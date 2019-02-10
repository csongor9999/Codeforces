#include <iostream>
#include <vector>
using namespace std;
int main() {

    int n;
    cin>>n;
    vector <string> seats(n);

    for(int i=0;i<n;i++) cin>>seats[i];

    int j=0;
    while(j<n && (seats[j][0]!='O' || seats[j][1]!='O') && (seats[j][3]!='O' || seats[j][4]!='O')) {
        j++;
    }
    if(j<n && seats[j][0]=='O' && seats[j][1]=='O') {
        seats[j][0]='+';
        seats[j][1]='+';
    } else if(j<n) {
        seats[j][3]='+';
        seats[j][4]='+';
    }

    if(j<n) {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++) cout<<seats[i]<<endl;
    } else {
        cout<<"NO";
    }

    return 0;
}
