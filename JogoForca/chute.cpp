#include "chute.hpp"
#include "condicional.hpp"
#include "imprime.hpp"


void chuta(std::map <char, bool>& chutou, char& chute, std::string& palavra_secreta, std::vector <char>& chutes_errados){
    
    chutou[chute] = true; 
    std::cout<<std::endl;
    if(letra_existe(chute, palavra_secreta)){
        std::cout<<"Seu chute está na palavra"<<std::endl;
        
        
    }
    else{
        std::cout<<"seu chute não está na palavra"<<std::endl;
        chutes_errados.push_back(chute);
        
    }
    std::cout<<std::endl;
}