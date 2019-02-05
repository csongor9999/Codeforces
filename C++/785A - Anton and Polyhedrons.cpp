#include <iostream>
#include <map>
using namespace std;
int main () {

    ios_base::sync_with_stdio(false);
    map <string, int> shapes;
    int n;
    int sum = 0;
    cin>>n;

    shapes["Tetrahedron"] = 4;
    shapes["Cube"] = 6;
    shapes["Octahedron"] = 8;
    shapes["Dodecahedron"] = 12;
    shapes["Icosahedron"] = 20;

    for (int i=0;i<n;i++) {
        string sv;
        cin>>sv;
        sum+=shapes[sv];
    }

    cout<<sum;

    return 0;
}
