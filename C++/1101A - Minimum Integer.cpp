#include <iostream>
using namespace std;
int main() {

    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        int left,right,num;
        cin>>left>>right>>num;
        num<left ? cout<<num<<endl : cout<<(right-(right%num))+num<<endl;
    }

    return 0;
}
