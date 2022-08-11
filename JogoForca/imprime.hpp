#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cstdlib>

namespace forca {
    inline void imprime_cabecalho() {
        std::cout << "*******************************" << std::endl;
        std::cout << "**Bem vindo ao Jogo da Forca!**" << std::endl;
        std::cout << "*******************************" << std::endl;
        std::cout << std::endl;
    }
}
void nao_enforcou(std::vector <char>& chutes_errados, bool& perdeu);
void imprime_erros(std::vector <char>& chutes_errados);
void imprime_palavra(std::string& palavra_secreta, std::map <char, bool>& chutou);
void mensagem_final(std::string& palavra_secreta, bool& perdeu);