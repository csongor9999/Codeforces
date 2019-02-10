#include <iostream>
#include <vector>
using namespace std;
int main() {

    long long int n;
    cin>>n;
    vector <vector <int> > arr(n,vector <int> (n));

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i==0 || j==0) {
                arr[i][j]=1;
            } else {
                arr[i][j]=arr[i-1][j]+arr[i][j-1];
            }
        }
    }

    cout<<arr[n-1][n-1];


    return 0;
}
