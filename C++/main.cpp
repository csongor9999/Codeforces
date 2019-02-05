#include <iostream>
using namespace std;
int main() {


    string year;
    cin>>year;
    year = to_string(stoi(year)+1);

    while(year[0]==year[1] || year[0]==year[2] || year[0]==year[3] || year[1]==year[3] || year[2]==year[3] || year[1]==year[2]) {
        year = to_string(stoi(year)+1);
    }

    cout<<year;

    return 0;
}
