#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int g = 0, m = 0, p = 0;
    int t = 0, wall = 0;
    cin >> t; cin >> wall;
    string titan;
    cin >> titan;
    cin >> p; cin >> m; cin >> g;
    p *= count(titan.begin(), titan.end(), 'P');
    m *= count(titan.begin(), titan.end(), 'M');
    g *= count(titan.begin(), titan.end(), 'G');
    int total = (p+m+g);
    cout << ceil((double)(total/wall)) + 1 << '\n';
    return 0;
}