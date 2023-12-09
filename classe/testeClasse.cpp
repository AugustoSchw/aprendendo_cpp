#include <iostream>

class TentativaClasse{
private:
    std::string nome;
    int idade;

public:

    //construtor:
    TentativaClasse(std::string nome, int idade){
        this->nome = nome;
        this->idade = idade;
    }

    //getter
    void getNome(){
        std::cout << "Nome: " << this->nome << std::endl;
    }

    void getIdade(){
        if(this->idade < 18){
            std::cout << "Você é menor de idade" << std::endl;
        }
        else{
            std::cout << "Você é maior de idade" << std::endl;
        }
        std::cout << "Idade: " << this->idade << std::endl;
    }

    //setter
    void setNome(std::string novoNome){
        this->nome = novoNome;
    }

    void setIdade(int novaIdade){
        this->idade = novaIdade;
    }

};

int main(){
    std::string meuNome;
    int minhaIdade;

    std::cout << "Escreva seu nome: ";
    std::cin >> meuNome;

    std::cout << "Escreva sua idade: ";
    std::cin >> minhaIdade;


    TentativaClasse eu(meuNome, minhaIdade);
    eu.getNome();
    eu.getIdade();
    

    while(true){
        int escolha;
        std::cout << "Escolha uma das opções: \n1) Trocar de nome \n2) Trocar de idade \n3) Mostrar minha idade \n4) Mostrar meu nome \n5) Terminar o programa" << std::endl;
        std::cin >> escolha;
        if(escolha == 1){
            std::string novoNome;
            std::cout << "Digite o seu novo nome: ";
            std::cin >> novoNome;
            eu.setNome(novoNome);
        }
        else if(escolha == 2){
            int novaIdade;
            std::cout << "Digite sua nova idade: ";
            std::cin >> novaIdade;
            eu.setIdade(novaIdade);
        }
        else if(escolha == 3){
            eu.getIdade();
        }
        else if(escolha == 4){
            eu.getNome();
        }
        else{
            break;
        }
    }
    return 0;
}
    
