#include <iostream>
#include <math.h>
using namespace std;
int main() {

    int n;
    cin>>n;
    int taxi = 0;
    int arr[4] = {0,0,0,0};

    for (int i=0;i<n;i++) {
        int sv;
        cin>>sv;
        switch(sv) {
            case 1: arr[0]++; break;
            case 2: arr[1]++; break;
            case 3: arr[2]++; break;
            case 4: arr[3]++; break;
        }
    }

    taxi += arr[3];

    while(arr[0]>0 && arr[2]>0) {
        taxi++;
        arr[0]--;
        arr[2]--;
    }

    arr[2]!=0 ? taxi+=arr[2] : taxi;
    (arr[1]*2+arr[0])%4==0 ? taxi+=(arr[1]*2+arr[0])/4 : taxi+=((arr[1]*2+arr[0])/4)+1 ;

    cout<<taxi;

    return 0;
}
