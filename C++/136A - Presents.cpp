#include <iostream>
#include <vector>
using namespace std;
int main() {

    int n;
    cin>>n;
    vector <int> num(n);
    vector <int> person(n);

    for(int i=0;i<n;i++) {
        num.push_back(i);
        cin>>person[i];
    }

    for(int i=0;i<n;i++) {
        int j=0;
        while(j<n && i+1!=person[j]) {
            j++;
        }
        cout<<j+1<<" ";
    }

    return 0;
}
