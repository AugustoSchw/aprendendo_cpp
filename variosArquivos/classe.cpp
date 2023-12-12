#include <iostream>
#include "classe.h"

Pessoa::Pessoa(int idade){
    this->idade = idade;
}

int Pessoa::getIdade(){
    return idade;
}

