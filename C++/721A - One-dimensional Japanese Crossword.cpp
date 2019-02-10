#include <iostream>
#include <vector>
using namespace std;
int main() {

    int n;
    string cw;
    int db = 0;
    vector <int> blocks;
    cin>>n>>cw;

    for(int i=0;i<n;i++) {
        if(cw[i]=='B') {
            db++;
        } else if (db!=0) {
            blocks.push_back(db);
            db=0;
        }
    }

    if(db!=0) {
        blocks.push_back(db);
    }

    cout<<blocks.size()<<endl;
    for(int i=0;i<blocks.size();i++) cout<<blocks[i]<<" ";

    return 0;
}
