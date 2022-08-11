#include <iostream>
#include <string>
#include <vector>
#include <map>

bool letra_existe(char& chute, std::string& palavra_secreta);
bool nao_acertou(std::string& palavra_secreta, std::map <char, bool>& chutou);