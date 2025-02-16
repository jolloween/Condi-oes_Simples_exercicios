#include <iostream>


int main() {
    using namespace std;

    int lv_ano_nascimento;
    int lv_ano_atual;
    int gv_idade;

    cout << "Digite o ano de nascimento: " << endl;
    cin >> lv_ano_nascimento;
    cout << "Ano atual: " << endl;
    cin >> lv_ano_atual;

    gv_idade = lv_ano_atual - lv_ano_nascimento;
     if (gv_idade >= 18) {
         cout << "voce pode votar!";
     }
    else {
        cout << "voce pode pode votar!" << endl;
    }

    return 0;
}

