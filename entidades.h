#ifndef ENTIDADES_H
#define ENTIDADES_H

#include "dominios.h"

class Entidade {
private:
    Senha senha;
    Setor setor;
    CPF cpf;
    Data data;
    Estado estado;
    Nome nome;
    Percentual percentual;
    CodigoDePagamento codigoPagamento;
    CodigoDeTitulo codigoTitulo;
    Dinheiro dinheiro;

public:
    void setSenha(const Senha&);
    Senha getSenha() const;

    void setSetor(const Setor&);
    Setor getSetor() const;

    void setCPF(const CPF&);
    CPF getCPF() const;

    void setData(const Data&);
    Data getData() const;

    void setEstado(const Estado&);
    Estado getEstado() const;

    void setNome(const Nome&);
    Nome getNome() const;

    void setPercentual(const Percentual&);
    Percentual getPercentual() const;

    void setCodigoPagamento(const CodigoDePagamento&);
    CodigoDePagamento getCodigoPagamento() const;

    void setCodigoTitulo(const CodigoDeTitulo&);
    CodigoDeTitulo getCodigoTitulo() const;

    void setDinheiro(const Dinheiro&);
    Dinheiro getDinheiro() const;
};

#endif
