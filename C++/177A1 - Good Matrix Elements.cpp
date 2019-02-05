#include <iostream>
#include <vector>
using namespace std;
int main () {

    int n;
    int sum=0;
    cin>>n;
    vector <vector <int> > matrix;
    vector <vector <int> > matrixCopy;
    for(int i=0;i<n;i++) {
            vector <int> sv;
        for(int j=0;j<n;j++) {
            int sv2;
            cin>>sv2;
            sv.push_back(sv2);
        }
        matrix.push_back(sv);
        matrixCopy.push_back(sv);
    }
    cout<<endl<<endl;
        int j=0;
    for(int i=0;i<n;i++) {
        matrix[(n-1)/2][i]=0;
        matrix[i][(n-1)/2]=0;
        matrix[i][j]=0;
        matrix[i][n-j-1]=0;
        j++;
    }



    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(matrix[i][j]==0) {
                sum+=matrixCopy[i][j];
            }
        }
    }

    cout<<sum;

    return 0;
}
