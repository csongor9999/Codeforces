#include <iostream>
#include <vector>
using namespace std;
int main() {

    int n;
    int group = 1;
    cin>>n;
    vector <int> num(n);

    for(int i=0;i<n;i++) cin>>num[i];
    for(int i=0;i<n-1;i++) {
        if(num[i]!=num[i+1]) {
            group++;
        }
    }

    cout<<group;

    return 0;
}
