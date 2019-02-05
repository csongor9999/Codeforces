#include <iostream>
using namespace std;
int main() {

    int n;
    int j=5;
    int step=0;
    cin>>n;
    while (n>0) {
        if (n-j>=0) {
          n-=j;
          step++;
        } else {
          j--;
        }
    }

    cout<<step;

    return 0;
}
