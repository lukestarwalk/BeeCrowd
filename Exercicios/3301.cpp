#include <iostream>
using namespace std;

int main(){
    int h, z, l;
    cin >> h >> z >> l;
    if((h < z && z < l) || (l < z && z < h)){
        cout << "zezinho\n";
    } else if ((z < h && h < l) || (l < h && h < z)){
        cout << "huguinho\n";
    } else{
        cout << "luisinho\n";
    }
    return 0;
}