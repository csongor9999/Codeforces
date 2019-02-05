#include <iostream>
#include <vector>
using namespace std;
int main() {

    int n;
    int l=0;
    int r=0;
    cin>>n;
    vector <vector <int> > arr(n,vector <int> (2));

    for(int i=0;i<n;i++) {
        cin>>arr[i][0]>>arr[i][1];
        l+=arr[i][0];
        r+=arr[i][1];
    }

    int maxE = abs(l-r);
    int maxI = 0;

    for(int i=0;i<n;i++) {
        if(abs((l-arr[i][0]+arr[i][1])-(r-arr[i][1]+arr[i][0]))>maxE) {
            maxE = abs((l-arr[i][0]+arr[i][1])-(r-arr[i][1]+arr[i][0]));
            maxI = i+1;
        }
    }

    cout<<maxI;

    return 0;
}
