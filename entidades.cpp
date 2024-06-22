#include "entidades.h"

void Entidade::setSenha(const Senha &senha) {
    this->senha = senha;
}

Senha Entidade::getSenha() const {
    return senha;
}

void Entidade::setSetor(const Setor &setor) {
    this->setor = setor;
}

Setor Entidade::getSetor() const {
    return setor;
}
