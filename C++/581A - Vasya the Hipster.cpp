#include <iostream>
using namespace std;
int main() {

    int n,m;
    cin>>n>>m;
    n<m ? cout<<n<<" "<<(m-n)/2 : cout<<m<<" "<<(n-m)/2;

    return 0;
}
