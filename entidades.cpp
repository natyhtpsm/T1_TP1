#include "entidades.h"

void ExemploEntidade::setSenha(const Senha &senha) {
    this->senha = senha;
}

Senha ExemploEntidade::getSenha() const {
    return senha;
}

void ExemploEntidade::setSetor(const Setor &setor) {
    this->setor = setor;
}

Setor ExemploEntidade::getSetor() const {
    return setor;
}
