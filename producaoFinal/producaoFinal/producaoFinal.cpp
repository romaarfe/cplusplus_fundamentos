// 2022-10-03 Produ��o Final -- C/C++ Fundamentos
// Elaborado por Rodrigo Fernandes

// Campo dos includes:
#include <iostream>
#include <locale>

using namespace std;

// Arrays declaradas e inicializadas como constantes/banco de dados: 
string listaNomes[20] = { "Ana", "Mariana", "Andr�", "Gabriella", "Marcos", "Carla", "R�mulo", "Hugo", "Rodrigo", "Silvano",
"Hugo", "Carlos", "Sara", "F�bio", "Alberto", "Lopo", "Rui", "Paulo", "Sandra", "Z�" };

string listaLocais[20] = { "S�", "Ad�ufe", "Maximinos", "Aveleda", "Espinho", "Lomar", "S�", "Sequeira", "Real",
"Palmeira", "Lama��es", "Gualtar", "Aveleda", "Maximinos", "Ferreiros", "Arentim", "Nogueira", "Lama��es", "Lama��es", "Lomar" };

string listaGeneros[20] = { "F", "F", "M", "F", "M", "F", "M", "M", "M", "M", "M", "M", "F", "M", "M", "M", "M", "M", "F", "M"};

double listaAnos[20] = {1992, 1980, 1984, 1990, 2001, 2005, 2010, 1970, 1964, 2015, 
                     2002, 1980, 1934, 2020, 2011, 1995, 1975, 2000, 2018, 1995};

// Estrutura principal do programa:
int main() {

    // Configura��o de acentua��o:
    setlocale(LC_ALL, "");

    // Declara��o dos arrays e das vari�veis:
    string arrayNomes[20] = {};
    string arrayLocais[20] = {};
    string arrayGeneros[20] = {};
    double arrayAnos[20] = {};
    char opcao;
    int i, indicemaisnovo, meninasmenores, ano1, ano2;
    double maisnovo;

    // Estrutura principal do ciclo e in�cio das op��o do Menu (I/O):
    do {
        cout << endl << "-------------------------------------------------------------------------------------------------------" << endl
            << "                                                    MENU                                                  " << endl
            << "-------------------------------------------------------------------------------------------------------" << endl
            << "I) Inicializar os 4 arrays" << endl
            << "L) Listar tudo" << endl
            << "1) Encontrar o mais novo" << endl
            << "2) Listar todos os nomes e respetivas idades" << endl
            << "3) Quantas meninas h� em Lama��es que sejam menores de idade?" << endl
            << "4) Dados dois anos, listar todas as fichas cujo ano de nascimento esteja entre esses dois valores" << endl
            << "S) Sair do Programa" << endl
            << "-------------------------------------------------------------------------------------------------------" << endl
            << endl << "Escolha uma das op��es acima: ";
        cin >> opcao; 
        
        // Condi��es e de fato as op��es do Menu (I/O):
        switch (opcao) {
 

            // Caso principal onde s�o inicializados os arrays:
        case 'I': 
            for (i = 0; i < 20; i++) {
                arrayNomes[i] = listaNomes[i];
                arrayLocais[i] = listaLocais[i];
                arrayGeneros[i] = listaGeneros[i];
                arrayAnos[i] = listaAnos[i];
            }
            cout << endl << "Os 4 arrays foram inicializados com sucesso!" << endl;
            break;
        
            // Local onde listam os arrays. Condi��o de teste para o array vazia sem inicializar (com notifica��o ao utilizador):
        case 'L':
            cout << endl;
        
            if (arrayAnos[0] == 0) {
            cout << "Por favor, sempre inicialize os arrays antes de executar qualquer outra tarefa!" << endl;
            }
            else
                for (i = 0; i < 20; i++) {
                    cout << "Na " << i+1 <<"� posi��o temos: " << arrayNomes[i] << ", de " << arrayLocais[i] 
                        << ", do g�nero " << arrayGeneros[i] << ", nascido(a) em " << arrayAnos[i] << "." << endl;
                }
            break;

            // Verifica��o e processamento do 'mais novo' e sua idade:
        case '1':
            cout << endl;
            indicemaisnovo = 0;
            maisnovo = arrayAnos[0];

            if (arrayAnos[0] == 0) {
                cout << "Por favor, sempre inicialize os arrays antes de executar qualquer outra tarefa!" << endl;
            }
            else {
                for (i = 0; i < 20; i++) {
                    if (arrayAnos[i] > maisnovo) {
                        maisnovo = arrayAnos[i];
                        indicemaisnovo = i;
                    }
                }
                cout << arrayNomes[indicemaisnovo] << " � o mais novo e tem " << (2022 - maisnovo) << " anos!" << endl;
            }
            break;

            // Verifica��o e listagem dos nomes e suas respetivas idade:
        case '2':
            cout << endl;
            if (arrayAnos[0] == 0) {
                cout << "Por favor, sempre inicialize os arrays antes de executar qualquer outra tarefa!" << endl;
            }
            else {
                for (i = 0; i < 20; i++) {
                    cout << "Na " << i + 1 << "� posi��o temos: " << arrayNomes[i] << ", com " << (2022 - arrayAnos[i]) << " anos." << endl;
                }
            }
            break;

            // Verifica��o das condi��es: 'F', 'Lama��es' e menor de idade:
        case '3':
            cout << endl;
            meninasmenores = 0;
            if (arrayAnos[0] == 0) {
                cout << "Por favor, sempre inicialize os arrays antes de executar qualquer outra tarefa!" << endl;
            }
            else {
                for (i = 0; i < 20; i++) {
                    if (arrayGeneros[i] == "F" && arrayLocais[i] == "Lama��es" && ((2022 - arrayAnos[i]) < 18)) {
                        meninasmenores++;
                    }
                }
                cout << "Existe " << meninasmenores << " menina em Lama��es que � menor de idade." << endl;
            }
            break;

            // Verifica��o do intervalo dos anos e listagem de todas informa��es:
        case '4':
            cout << endl;
            ano1 = 0, ano2 = 0;

            if (arrayAnos[0] == 0) {
                cout << "Por favor, sempre inicialize os arrays antes de executar qualquer outra tarefa!" << endl;
            }
            else {
                cout << "Insira um ano (formato aaaa): ";
                cin >> ano1;
                cout << "Insira outro ano (formato aaaa): ";
                cin >> ano2;
                cout << endl;
                for (i = 0; i < 20; i++) {
                    if (((arrayAnos[i] <= ano1) && (arrayAnos[i] >= ano2)) || ((arrayAnos[i] >= ano1) && (arrayAnos[i] <= ano2))) {
                        cout << ">>> " << arrayNomes[i] << " do g�nero " << arrayGeneros[i] << ", nascido em " << arrayAnos[i] << ", tem "
                            << (2022 - arrayAnos[i]) << " anos, logo � ";
                        if (2022 - arrayAnos[i] < 18) {
                            cout << "menor de idade." << endl;
                        }
                        else
                            cout << "maior de idade." << endl;
                    }
                }
            }
            break;

            // Mensagem em caso de encerrar o programa:
        case 'S':
            cout << endl << "Voc� finalizou o programa. At� a pr�xima!" << endl;
            break;

            // Mensagem em caso de op��o escolhida inv�lida:
        default:
            cout << endl << "Voc� escolheu uma op��o inv�lida. Tente novamente!" << endl;
            break;
        }

    } while (opcao != 'S');
}
// Fim do programa
