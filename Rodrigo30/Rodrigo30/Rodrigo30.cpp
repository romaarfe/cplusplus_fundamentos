// 2022-09-30 Produ��o: Rodrigo30
// Elaborado por Rodrigo Fernandes


// Regi�o dos "includes":
#include <iostream>
#include <locale>

using namespace std;

int main() {

    // Configura��o de acentua��o:
    setlocale(LC_ALL, "");

    // Declara��o das vari�veis:
    int i, lista[5] = { 236, 8, 134, 81, 176 }, array[5] = {}, contpares = 0, impares, teste = 0, contteste = 0, j;
    int maior = array[0], pares = 0, maiorpar = 0, novonumero, posicao, soma, media, numpar, numimpar, troca, n1, n2;
    char opcao;
    bool negativos, imparmenormedia;

    // Estrutura de repeti��o com Inputs e Outputs:
    do {

        cout << "-----------------------------------------------------------------------------------------------------------" << endl
            << "                                            MENU - PARTE 1                                                  " << endl
            << "-----------------------------------------------------------------------------------------------------------" << endl
            << endl << "I) Inicializa o array com os n�meros indicados." << endl
            << "Z) Colocar todas as posi��es a zero." << endl
            << "L) Listar o array." << endl
            << "S) Sair do Programa." << endl
            << "A) Quantos n�meros �mpares h� no array?" << endl
            << "B) Ler um n�mero; Quantas vezes esse n�mero existe no array?" << endl
            << "C) H� (sim ou n�o) n�meros negativos no array?" << endl
            << "D) Qual � o maior n�mero?" << endl
            << "F) Qual � o maior n�mero par?" << endl
            << endl << "-----------------------------------------------------------------------------------------------------------" << endl
            << "                                            MENU - PARTE 2                                                  " << endl
            << "-----------------------------------------------------------------------------------------------------------" << endl
            << endl << "H) H� algum n�mero �mpar menor do que a m�dia dos 5 n�meros?" << endl
            << "X) Insira o 1� n�mero e o 2� n�mero. Caso exista o 1�, ir� troc�-lo pelo 2�." << endl
            << "J) Inserir um novo n�mero e sua posi��o." << endl
            << "K) Inverter a ordem dos elementos do array." << endl
            << endl << "-----------------------------------------------------------------------------------------------------------" << endl;


        cout << endl << "Insira uma das op��es acima: ";
        cin >> opcao;

        // Condi��es para acessar o menu:
        switch (opcao) {

            // In�cio da Parte 1:
        case 'I':
            for (i = 0; i < 5; i++) {
                array[i] = lista[i];
            }
            cout << endl << "Array inicializado com sucesso!" << endl
                << endl;
            break;

        case 'Z':
            for (i = 0; i < 5; i++) {
                array[i] = 0;
            }
            cout << endl << "Todas as posi��es foram colocadas a zero!" << endl
                << endl;
            break;

        case 'L':
            cout << endl;
            for (i = 0; i < 5; i++) {
                cout << ">> " << i + 1 << "� posi��o = " << array[i] << endl;
            }
            cout << endl;
            break;

        case 'S':
            cout << endl << "Voc� escolheu a op��o de SAIR. At� logo!" << endl;
            break;

        case 'A':
            impares = 0;
            for (i = 0; i < 5; i++) {
                if (array[i] % 2 == 0) {
                    pares++;
                }
                else {
                    impares++;
                }
            }
            cout << endl << "Existem no array: " << impares << " n�mero(s) �mpar(es)!" << endl
                << endl;
            break;

        case 'B':
            cout << endl << "Insira um n�mero: ";
            cin >> teste;
            for (i = 0; i < 5; i++) {
                if (array[i] == teste) {
                    contteste++;
                }
            }
            cout << endl << "O n�mero digitado aparece " << contteste << " vez(es) no array." << endl
                << endl;
            break;

        case 'C':
            negativos = false;
            for (i = 0; i < 5; i++) {
                if (array[i] < 0) {
                    negativos = true;
                }
            }
            if (negativos == true) {
                cout << endl << "Sim! Existem n�meros negativos no array." << endl
                    << endl;
            }
            else
                cout << endl << "N�o existem n�meros negativos no array." << endl
                << endl;
            break;

        case 'D':
            maior = 0;
            for (i = 0; i < 5; i++) {
                if (array[i] > maior) {
                    maior = array[i];
                }
            }
            cout << endl << "O maior n�mero �: " << maior << endl
                << endl;
            break;

        case 'F':
            maior = 0;
            pares = 0;
            maiorpar = 0;
            for (i = 0; i < 5; i++) {
                if (array[i] > maior) {
                    maior = array[i];
                }
                if (array[i] % 2 == 0) {
                    pares = array[i];
                }

                for (j = 0; j < 5; j++) {
                    if (array[j] == maior && array[j] == pares) {
                        maiorpar = array[j];
                    }
                }
            }
            cout << endl << "O maior n�mero par �: " << maiorpar << endl
                << endl;
            break;

        // In�cio da Parte 2:

        case 'H': 
            soma = 0;
            media = 0;
            numimpar = 0;
            numpar = 0;
            imparmenormedia = false;
            for (i = 0; i < 5; i++) {
                soma = soma + array[i];
                if (array[i] % 2 == 0) {
                    numpar = array[i];
                }
                else {
                    numimpar = array[i];
                }
            }
            media = soma / i;

            for (i = 0; i < 5; i++) {
                if (numimpar < media) {
                    imparmenormedia = true;
                }
            }

            if (imparmenormedia == true) {
                cout << endl << "Sim!Existem n�meros �mpares menores que a m�dia." << endl
                    << endl;
            }
            else
                cout << endl << "N�o existem n�meros �mpares menores que a m�dia." << endl
                << endl;

            break;
        
        case 'X':
            n1 = 0;
            n2 = 0;
            cout << "Insira um n�mero: ";
            cin >> n1;
            cout << "Agora insira outro n�mero: ";
            cin >> n2;
            cout << endl;

            for (i = 0; i < 5; i++) {
                if (array[i] == n1) {
                    array[i] = n2;
                }
            }
            cout << endl << "Verifica��o e atualiza��o conclu�da." << endl
                << endl;
            break;


        case 'J':
            novonumero = 0;
            posicao = 0;
            cout << endl << "Digite um novo n�mero: ";
            cin >> novonumero;
            cout << endl << "Quer colocar este n�mero em que posi��o? ";
            cin >> posicao;
            cout << endl;

            array[posicao - 1] = novonumero;
            cout << endl << "Novo n�mero inserido com sucesso!" << endl
                << endl;
            break;
            
        case 'K':
            troca = array[4];
            array[4] = array[0];
            array[0] = troca;
            troca = 0;
            troca = array[1];
            array[1] = array[3];
            array[3] = troca;

            cout << endl << "Troca realizada com sucesso!" << endl
                << endl;
            break;

            // Caso seja digitado alguma op��o que n�o consta na listagem: 
        default:

            cout << endl << "Voc� digitou uma op��o inv�lida." << endl
                << endl;
            break;
        }

        


    } while (opcao != 'S');
    

    

    // Finaliza��o do ciclo e do programa.
}
