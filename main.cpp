#include <iostream>
#include "dominios.h"
#include "entidades.h"
#include "testes.h"

int main() {
    TUSenha testeSenha;
    if (testeSenha.run() == TUSenha::SUCESSO) {
        std::cout << "Teste de Senha passou!" << std::endl;
    } else {
        std::cout << "Teste de Senha falhou!" << std::endl;
    }

    TUSetor testeSetor;
    if (testeSetor.run() == TUSetor::SUCESSO) {
        std::cout << "Teste de Setor passou!" << std::endl;
    } else {
        std::cout << "Teste de Setor falhou!" << std::endl;
    }

    TUNome testeNome;
    if (testeNome.run() == TUNome::SUCESSO) {
        std::cout << "Teste de Nome passou!" << std::endl;
    } else {
        std::cout << "Teste de Nome falhou!" << std::endl;
    }

    TUPercentual testePercentual;
    if (testePercentual.run() == TUPercentual::SUCESSO) {
        std::cout << "Teste de Percentual passou!" << std::endl;
    } else {
        std::cout << "Teste de Percentual falhou!" << std::endl;
    }

    TUData testeData;
    if (testeData.run() == TUData::SUCESSO) {
        cout << "Teste de Data passou!" << endl;
    } else {
        cout << "Teste de Data falhou!" << endl;
    }

    return 0;
}
