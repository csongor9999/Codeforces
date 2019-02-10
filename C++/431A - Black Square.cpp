#include <iostream>
#include <vector>
using namespace std;
int main() {

    vector <int> square(4);
    string touch;
    int ossz=0;
    cin>>square[0]>>square[1]>>square[2]>>square[3];
    cin>>touch;

    for(int i=0;i<touch.length();i++) {
        ossz+=square[(int)touch[i]-49];
    }

    cout<<ossz;


    return 0;
}
