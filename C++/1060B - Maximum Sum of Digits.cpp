#include <iostream>
#include <math.h>
using namespace std;
int main () {

    long long int a;
    long long int suma=0,sumb=0;
    long long digit=0;
    cin>>a;

    long long int temp = a;
    while(temp>0) {
        temp/=10;
        digit++;
    }

    digit = pow(10,digit-1)+0.5;
    long long int sv1 = digit-1;
    long long int sv2 = a-sv1;

    while(sv1>0) {
        suma+=sv1%10;
        sv1/=10;
    }

    while(sv2>0) {
        sumb+=sv2%10;
        sv2/=10;
    }

    cout<<suma+sumb;

    return 0;
}
