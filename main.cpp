#include <iostream>
#include "dominios.h"
#include "entidades.h"
#include "testes.h"

int main() {
    try {
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
            std::cout << "Teste de Data passou!" << std::endl;
        } else {
            std::cout << "Teste de Data falhou!" << std::endl;
        }

        TUCPF testeCPF;
        if (testeCPF.run() == TUCPF::SUCESSO) {
            std::cout << "Teste de CPF passou!" << std::endl;
        } else {
            std::cout << "Teste de CPF falhou!" << std::endl;
        }

        TUEstado testeEstado;
        if (testeEstado.run() == TUEstado::SUCESSO) {
            std::cout << "Teste de Estado passou!" << std::endl;
        } else {
            std::cout << "Teste de Estado falhou!" << std::endl;
        }

        TUCodigoDePagamento testeCodigoPagamento;
        if (testeCodigoPagamento.run() == TUCodigoDePagamento::SUCESSO) {
            std::cout << "Teste de Codigo de Pagamento passou!" << std::endl;
        } else {
            std::cout << "Teste de Codigo de Pagamento falhou!" << std::endl;
        }

        TUPagamento testePagamento;
        if (testePagamento.run() == TUPagamento::SUCESSO) {
            std::cout << "Teste de Pagamento passou!" << std::endl;
        } else {
            std::cout << "Teste de Pagamento falhou!" << std::endl;
        }

        TUConta testeConta;
        if (testeConta.run() == TUConta::SUCESSO) {
            std::cout << "Teste da Conta passou.\n";
        } else {
            std::cout << "Teste da Conta falhou.\n";
        }

        TUTitulo testeTitulo;
        if (testeTitulo.run() == TUTitulo::SUCESSO) {
            std::cout << "Teste de Titulo passou.\n";
        } else {
            std::cout << "Teste de Titulo falhou.\n";
        }

        TUCodigoDeTitulo testeCodigoDeTitulo;
        if (testeCodigoDeTitulo.run() == TUCodigoDeTitulo::SUCESSO) {
            std::cout << "Teste de Código de Título passou.\n";
        } else {
            std::cout << "Teste de Código de Título falhou.\n";
        }

        TUDinheiro testeDinheiro;
        if (testeDinheiro.run() == TUDinheiro::SUCESSO) {
            std::cout << "Teste de Dinheiro passou.\n";
        } else {
            std::cout << "Teste de Dinheiro falhou.\n";
        }
    } catch (const std::invalid_argument& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Erro inesperado: " << e.what() << std::endl;
    }

    return 0;
}

