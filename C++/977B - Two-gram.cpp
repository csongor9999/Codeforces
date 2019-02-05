#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {

    int n;
    map <string,int> freq;
    map <string,int>::iterator it;
    int maxN = 0;
    string maxS;
    string letters;
    cin>>n>>letters;

    for(int i=0;i<n-1;i++) {
        if(freq.find(letters.substr(i,2)) == freq.end()) {
            freq.insert(make_pair(letters.substr(i,2),1));
        } else {
            freq[letters.substr(i,2)]++;
        }
    }

    for(it=freq.begin();it!=freq.end();it++) {
        if(it->second>maxN) {
            maxN=it->second;
            maxS=it->first;
        }
    }

    cout<<maxS;



    return 0;
}
