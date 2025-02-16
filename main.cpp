#include <iostream>


int main() {
    using namespace std;
    int lv_numero;


    cout << "Digite um numero: " << endl;
    cin >> lv_numero;

    if (lv_numero % 2 == 0) {
        cout << lv_numero<< " e par";
    }
    else {
        cout << lv_numero << " e impar";
    }
    return 0;
}