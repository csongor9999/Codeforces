#include <iostream>
#include <vector>
using namespace std;
int main() {

    int n;
    cin>>n;
    vector <string> arr;
    vector <int> db;
    for(int i=0;i<n;i++) {
        string sv;
        cin>>sv;
        int j=0;
        while(j<arr.size() && sv!=arr[j]) {
            j++;
        }

        if(j==arr.size()) {
            arr.push_back(sv);
            db.push_back(0);
            cout<<"OK"<<endl;
        } else {
            cout<<sv<<db[j]+1<<endl;
            db[j] +=1;
        }
    }

    return 0;
}
