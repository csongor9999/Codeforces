#include <iostream>
using namespace std;
int main() {

    char arr[3][10] = {{'q','w','e','r','t','y','u','i','o','p'},{'a','s','d','f','g','h','j','k','l',';'},{'z','x','c','v','b','n','m',',','.','/'}};
    char dir;
    string txt;
    cin>>dir>>txt;
    for(int i=0;i<txt.length();i++) {
        for (int j=0;j<3;j++) {
            for (int k=0;k<10;k++) {
                if (txt[i]==arr[j][k]) {
                    if(dir=='R') {
                        cout<<arr[j][k-1];
                    } else {
                        cout<<arr[j][k+1];
                    }
                }
            }
        }
    }


    return 0;
}
