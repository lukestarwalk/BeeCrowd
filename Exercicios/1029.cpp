#include <iostream>
using namespace std;

const int MAX = 40;
int tabela[MAX];
int resultado[MAX];

int calls(int n){
    if (n == 0) return 1;
    if (n == 1) return 1;
    if (tabela[n] != -1) {
        return tabela[n];
    }  
    tabela[n] = 1 + calls(n-1) + calls(n-2);
    return tabela[n];
}

int result(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (resultado[n] != -1) {
        return resultado[n];
    }  
    resultado[n] = result(n-1) + result(n-2);
    return resultado[n];
}
int main(){
    for (int i = 0; i < MAX; i++){
        tabela[i] = -1;
        resultado[i] = -1;
    }
    int x = 0; 
    cin >> x;
    int n = 0;
    while (x--)
    {
        cin >> n;
        cout << "fib(" << n << ") = " << calls(n) - 1 << " calls = " << result(n) << endl;

    }
    return 0;
}