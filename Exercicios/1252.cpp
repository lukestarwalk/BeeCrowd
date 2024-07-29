#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
    int n = 0, m = 0;
    pair <int, int> p;
    vector <pair<int, int>> v;
    int value = 0;
    while (true) {
        cin >> n >> m;
        if (n == 0 && m == 0) break;
        for(int i = 0; i < n; i++){
            cin >> value;
            p.first = value; p.second = value%m;
            v.push_back(p); 
        }
        sort(v.begin(), v.end(), [](pair<int, int>& a, pair <int, int>& b){
            if (a.second != b.second) return a.second < b.second;
            else if (abs((a.first)%2) == 1 && abs((b.first)%2) == 1) return (a.first) > (b.first);
            else if (abs((a.first)%2) == 0 && abs((b.first)%2) == 0) return (a.first) < (b.first);
            return abs((a.first)%2) > abs((b.first)%2);
        });
        
        cout << n << " " << m << endl;
        for (auto p: v){
            cout << p.first << endl;
        }
        v.clear();
    }
    cout << n << " " << m << endl;
    return 0;
}