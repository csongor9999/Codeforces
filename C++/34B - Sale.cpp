#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main() {

    int m,n;
    cin>>m>>n;
    int sum=0;
    vector <int> arr;
    for (int i=0;i<m;i++) {
        int sv;
        cin>>sv;
        if (sv<0) {
        arr.push_back(sv);
        }
    }

    if(arr.size()>1) {
        for (int i=0;i<arr.size()-1;i++) {
            for (int j=i+1;j<arr.size();j++) {
                if (arr[i]>arr[j]) {
                    swap(arr[i],arr[j]);
                }
            }
        }
    }

    int k=0;
    while(k<n && k<arr.size()) {
        sum+=arr[k];
        k++;
    }

    cout<<abs(sum);

    return 0;
}
