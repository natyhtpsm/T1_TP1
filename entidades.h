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

class Pagamento {
    private:
        CodigoDePagamento codigo;
        Data data;
        Percentual percentual;
        Estado estado;

    public:
        void setCodigo(const CodigoDePagamento&);
        CodigoDePagamento getCodigo();

        void setData(const Data&);
        Data getData();

        void setPercentual(const Percentual&);
        Percentual getPercentual();

        void setEstado(const Estado&);
        Estado getEstado();
};

inline CodigoDePagamento Pagamento::getCodigo() {
    return codigo;
}

inline Data Pagamento::getData() {
    return data;
}

inline Percentual Pagamento::getPercentual() {
    return percentual;
}

inline Estado Pagamento::getEstado() {
    return estado;
}

class Conta {
private:
    std::string cpf;
    std::string nome;
    std::string senha;

public:
    void setCpf(const std::string&);
    std::string getCpf();

    void setNome(const std::string&);
    std::string getNome();

    void setSenha(const std::string&);
    std::string getSenha();
};

inline std::string Conta::getCpf() {
    return cpf;
}

inline std::string Conta::getNome() {
    return nome;
}

inline std::string Conta::getSenha() {
    return senha;
}


#endif
