// 2022-09-30 Produção: Rodrigo30
// Elaborado por Rodrigo Fernandes


// Região dos "includes":
#include <iostream>
#include <locale>

using namespace std;

int main() {

    // Configuração de acentuação:
    setlocale(LC_ALL, "");

    // Declaração das variáveis:
    int i, lista[5] = { 236, 8, 134, 81, 176 }, array[5] = {}, contpares = 0, impares, teste = 0, contteste = 0, j;
    int maior = array[0], pares = 0, maiorpar = 0, novonumero, posicao, soma, media, numpar, numimpar, troca, n1, n2;
    char opcao;
    bool negativos, imparmenormedia;

    // Estrutura de repetição com Inputs e Outputs:
    do {

        cout << "-----------------------------------------------------------------------------------------------------------" << endl
            << "                                            MENU - PARTE 1                                                  " << endl
            << "-----------------------------------------------------------------------------------------------------------" << endl
            << endl << "I) Inicializa o array com os números indicados." << endl
            << "Z) Colocar todas as posições a zero." << endl
            << "L) Listar o array." << endl
            << "S) Sair do Programa." << endl
            << "A) Quantos números ímpares há no array?" << endl
            << "B) Ler um número; Quantas vezes esse número existe no array?" << endl
            << "C) Há (sim ou não) números negativos no array?" << endl
            << "D) Qual é o maior número?" << endl
            << "F) Qual é o maior número par?" << endl
            << endl << "-----------------------------------------------------------------------------------------------------------" << endl
            << "                                            MENU - PARTE 2                                                  " << endl
            << "-----------------------------------------------------------------------------------------------------------" << endl
            << endl << "H) Há algum número ímpar menor do que a média dos 5 números?" << endl
            << "X) Insira o 1º número e o 2º número. Caso exista o 1º, irá trocá-lo pelo 2º." << endl
            << "J) Inserir um novo número e sua posição." << endl
            << "K) Inverter a ordem dos elementos do array." << endl
            << endl << "-----------------------------------------------------------------------------------------------------------" << endl;


        cout << endl << "Insira uma das opções acima: ";
        cin >> opcao;

        // Condições para acessar o menu:
        switch (opcao) {

            // Início da Parte 1:
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
            cout << endl << "Todas as posições foram colocadas a zero!" << endl
                << endl;
            break;

        case 'L':
            cout << endl;
            for (i = 0; i < 5; i++) {
                cout << ">> " << i + 1 << "º posição = " << array[i] << endl;
            }
            cout << endl;
            break;

        case 'S':
            cout << endl << "Você escolheu a opção de SAIR. Até logo!" << endl;
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
            cout << endl << "Existem no array: " << impares << " número(s) ímpar(es)!" << endl
                << endl;
            break;

        case 'B':
            cout << endl << "Insira um número: ";
            cin >> teste;
            for (i = 0; i < 5; i++) {
                if (array[i] == teste) {
                    contteste++;
                }
            }
            cout << endl << "O número digitado aparece " << contteste << " vez(es) no array." << endl
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
                cout << endl << "Sim! Existem números negativos no array." << endl
                    << endl;
            }
            else
                cout << endl << "Não existem números negativos no array." << endl
                << endl;
            break;

        case 'D':
            maior = 0;
            for (i = 0; i < 5; i++) {
                if (array[i] > maior) {
                    maior = array[i];
                }
            }
            cout << endl << "O maior número é: " << maior << endl
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
            cout << endl << "O maior número par é: " << maiorpar << endl
                << endl;
            break;

        // Início da Parte 2:

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
                cout << endl << "Sim!Existem números ímpares menores que a média." << endl
                    << endl;
            }
            else
                cout << endl << "Não existem números ímpares menores que a média." << endl
                << endl;

            break;
        
        case 'X':
            n1 = 0;
            n2 = 0;
            cout << "Insira um número: ";
            cin >> n1;
            cout << "Agora insira outro número: ";
            cin >> n2;
            cout << endl;

            for (i = 0; i < 5; i++) {
                if (array[i] == n1) {
                    array[i] = n2;
                }
            }
            cout << endl << "Verificação e atualização concluída." << endl
                << endl;
            break;


        case 'J':
            novonumero = 0;
            posicao = 0;
            cout << endl << "Digite um novo número: ";
            cin >> novonumero;
            cout << endl << "Quer colocar este número em que posição? ";
            cin >> posicao;
            cout << endl;

            array[posicao - 1] = novonumero;
            cout << endl << "Novo número inserido com sucesso!" << endl
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

            // Caso seja digitado alguma opção que não consta na listagem: 
        default:

            cout << endl << "Você digitou uma opção inválida." << endl
                << endl;
            break;
        }

        


    } while (opcao != 'S');
    

    

    // Finalização do ciclo e do programa.
}
