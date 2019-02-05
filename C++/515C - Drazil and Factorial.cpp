#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int factorials[] = {1,1,2,6,24,120,720,5040,40320,362880};

    int n;
    string num;
    vector <int> divF;
    cin>>n>>num;

    for(int i=0;i<n;i++) {
       if(int(num[i])-48 == 4) {
            divF.push_back(3);
            divF.push_back(2);
            divF.push_back(2);
       } else if(int(num[i])-48 == 6) {
            divF.push_back(5);
            divF.push_back(3);
       } else if(int(num[i])-48 == 8) {
            divF.push_back(7);
            divF.push_back(2);
            divF.push_back(2);
            divF.push_back(2);
       } else if(int(num[i])-48 == 9) {
            divF.push_back(7);
            divF.push_back(3);
            divF.push_back(3);
            divF.push_back(2);
       } else if(int(num[i])-48 !=0 && int(num[i])-48 !=1) {
            divF.push_back(int(num[i])-48);
       }
    }

    sort(divF.rbegin(),divF.rend());

    for(int i=0;i<divF.size();i++) {
        cout<<divF[i];
    }

}
