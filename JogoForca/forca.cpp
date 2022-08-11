#include <iostream>
#include <string>
#include <cstdlib>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <locale.h>
#include <windows.h>
#include "arquivo.hpp"
#include "chute.hpp"
#include "condicional.hpp"
#include "imprime.hpp"

using namespace std;

static string palavra_secreta;
static vector <char> chutes_errados;
static map <char, bool> chutou;
static char chute;
static bool perdeu = false;

int main(){

    //Define o valor das páginas de código UTF8 e default do Windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    //Define codificação como sendo UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);

    forca::imprime_cabecalho();
    sorteia_palavra(palavra_secreta);
  

    while(nao_acertou(palavra_secreta, chutou) && !perdeu){
        
        imprime_erros(chutes_errados);
        imprime_palavra(palavra_secreta, chutou);
        cout << endl;
        cout << "De o seu chute: ";
        cin >> chute;
        chuta(chutou,chute,palavra_secreta, chutes_errados);
        nao_enforcou(chutes_errados, perdeu);

    }

    mensagem_final(palavra_secreta, perdeu);
        
}