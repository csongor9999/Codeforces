#include <iostream>
#include <vector>
using namespace std;
int main() {

    ios_base::sync_with_stdio(false);
    int n;
    int sum=0;
    int akt=0;
    int db = 0;
    cin>>n;
    vector <int> arr(n);

    for(int i=0;i<n;i++) {
        cin>>arr[i];
        sum+=arr[i];
    }

    for(int i=0;i<n-1;i++) {
            akt+=arr[i];
            sum-=arr[i];
        if(akt==sum){
            db++;
        }
    }

    cout<<db;


    return 0;
}
