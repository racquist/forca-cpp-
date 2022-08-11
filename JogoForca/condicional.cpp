#include "condicional.hpp"
#include "chute.hpp"

bool letra_existe(char& chute, std::string& palavra_secreta){
    
    for(char letra : palavra_secreta){
        if(chute == letra){
            return true;
        }
    }
    return false;
}

bool nao_acertou(std::string& palavra_secreta, std::map <char, bool>& chutou){
    for(char letra: palavra_secreta){
        if(!chutou[letra]){
            return true;
        }
    }
    return false;
}


