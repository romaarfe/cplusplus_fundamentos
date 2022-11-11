// 2022-09-20 Produção 1.5 (consola) (ler números, ...).
// Elaborado por Rodrigo Fernandes.

#include <iostream>
#include <locale>

using namespace std;

int main() {
    // Declaração das variáveis:
    int n1, n2, n3, n4, n5, zeros=0, soma, menor, maiorMil=0;

    setlocale(LC_ALL, "");

    // Input e Output dos números:
    cout << "Por favor, digite um número: ";
    cin >> n1;

    cout << "Preciso de mais um numero: ";
    cin >> n2;

    cout << "Agora mais um numero: ";
    cin >> n3;

    cout << "Estamos quase no fim. Mais um numero: ";
    cin >> n4;

    cout << "Por fim, insira o ultimo numero: ";
    cin >> n5;

    // Verificação e contagem de zeros (0):
    if (n1 == 0) {
        zeros++;
    }
    if (n2 == 0) {
        zeros++;
    }
    if (n3 == 0) {
        zeros++;
    }
    if (n4 == 0) {
        zeros++;
    }
    if (n5 == 0) {
        zeros++;
    }

    // Processar a soma:
    soma = n1 + n2 + n3 + n4 + n5;

    // Verificar e processar o menor número:
    menor = n1;

    if (n2 < menor) {
        menor = n2;
    }

    if (n3 < menor) {
        menor = n3;
    }

    if (n4 < menor) {
        menor = n4;
    }

    if (n5 < menor) {
        menor = n5;
    }

    // Contar os números maiores que mil:
    if (n1 > 1000) {
        maiorMil++;
    }

    if (n2 > 1000) {
        maiorMil++;
    }

    if (n3 > 1000) {
        maiorMil++;
    }

    if (n4 > 1000) {
        maiorMil++;
    }

    if (n5 > 1000) {
        maiorMil++;
    }

    // Informar ao utilizar dos zeros:
    cout << endl << "Existem " << zeros << " zeros!" << endl;

    // Informar ao utilizador da soma destes números:
    cout << "A soma dos numeros digitados e " << soma << "." << endl;

    // Informar ao utilizador o menor número:
    cout << "O menor numero e " << menor << "." << endl;

    // Verificar, processar e informar se há maiores que mil:
    if (maiorMil >= 1) {
        cout << "SIM! Ha numeros maiores que mil!";
    }

    else {
        cout << "NAO ha numeros maiores que mil!";
    }

    cout << endl;

    // Informar ao utilizador o criador do código:
    cout << endl << "Elaborado por Rodrigo Fernandes." << endl;

}

