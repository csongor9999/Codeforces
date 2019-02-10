#include <iostream>
using namespace std;
int main() {

    int n;
    cin>>n;

    for(int i=0;i<n-1;i++) {
        i%2==0 ? cout<<"I hate that " : cout<<"I love that ";
    }

    n%2==1 ? cout<<"I hate it " : cout<<"I love it ";

    return 0;
}
