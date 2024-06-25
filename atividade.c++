#include <iostream>

using namespace std;

int main() {
    int quantidadeNotas;
    float nota, soma = 0, media;
    
    cout << "Quantas notas deseja inserir? ";
    cin >> quantidadeNotas;
    
    for (int i = 1; i <= quantidadeNotas; i++) {
        cout << " #" << i << ": ";
        cin >> nota;
        
        soma += nota;
    }
    
    media = soma / quantidadeNotas;
    
    cout << "A média das notas é: " << fixed << setprecision(2) << media << endl;
    
    return 0;
}
