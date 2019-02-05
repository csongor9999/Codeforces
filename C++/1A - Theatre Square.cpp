#include <iostream>
using namespace std;
int main () {

    long long int n,m,a;
    cin>>n>>m>>a;

    n%a==0 ? n = n/a : n = n/a+1;
    m%a==0 ? m = m/a : m = m/a+1;

    cout<<n*m;


    return 0;
}
