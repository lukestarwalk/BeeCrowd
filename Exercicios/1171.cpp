#include <iostream>
#include <map>
using namespace std;

int main(){
    map <int, int> freq;
    int n; cin >> n;
    for (int i = 0, x; i < n; i++){
        cin >> x;
        freq[x] += 1;
    }
    for (auto x: freq){
        cout << x.first << " aparece " << x.second << " vez(es)\n";
    }
}