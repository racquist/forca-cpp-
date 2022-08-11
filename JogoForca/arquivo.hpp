#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <map>
#include <time.h>
#include <iostream>

std::vector<std::string> le_arquivo();
void sorteia_palavra(std::string& palavra_secreta);
void salva_arquivo(std::vector<std::string> lista_palavras);
void adiciona_palavra();