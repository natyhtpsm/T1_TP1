#ifndef ENTIDADES_H
#define ENTIDADES_H

#include "dominios.h"

class Entidade {
private:
    Senha senha;
    Setor setor;
public:
    void setSenha(const Senha&);
    Senha getSenha() const;
    void setSetor(const Setor&);
    Setor getSetor() const;
};

#endif 