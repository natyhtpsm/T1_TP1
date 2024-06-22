#include <iostream>
#include "dominios.h"
#include "entidades.h"

int main() {
    try {
        Senha senha;
        senha.setValor("123789");
        std::cout << "Senha: " << senha.getValor() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Erro ao definir senha: " << e.what() << std::endl;
    }

    try {
        Setor setor;
        setor.setValor("Agricultura");
        std::cout << "Setor: " << setor.getValor() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Erro ao definir setor: " << e.what() << std::endl;
    }

    try {
        Nome nome;
        nome.setValor("Ana Silva");
        std::cout << "Nome: " << nome.getValor() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Erro ao definir nome: " << e.what() << std::endl;
    }

    try {
        Percentual percentual;
        percentual.setValor(85);
        std::cout << "Percentual: " << percentual.getValor() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Erro ao definir percentual: " << e.what() << std::endl;
    }

    try {
        Entidade entidade;
        Senha senhaValida;
        senhaValida.setValor("987654");
        entidade.setSenha(senhaValida);
        std::cout << "Entidade Senha: " << entidade.getSenha().getValor() << std::endl;

        Setor setorValido;
        setorValido.setValor("Energia");
        entidade.setSetor(setorValido);
        std::cout << "Entidade Setor: " << entidade.getSetor().getValor() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Erro na entidade: " << e.what() << std::endl;
    }

    return 0;

}
