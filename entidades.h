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

//Matricula: 231036050
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

//Matricula: 231036050
inline CodigoDePagamento Pagamento::getCodigo() {
    return codigo;
}

//Matricula: 231036050
inline Data Pagamento::getData() {
    return data;
}

//Matricula: 231036050
inline Percentual Pagamento::getPercentual() {
    return percentual;
}

//Matricula: 231036050
inline Estado Pagamento::getEstado() {
    return estado;
}

//Matricula: 170153169
class Conta {
    private:
        CPF cpf;
        Nome nome;
        Senha senha;

    public:
        void setCpf(const CPF&);
        CPF getCpf() const;

        void setNome(const Nome&);
        Nome getNome() const;

        void setSenha(const Senha&);
        Senha getSenha() const;
};

//Matricula: 170153169
class Titulo {
    private:
        CodigoDeTitulo codigo;
        Nome emissor;
        Setor setor;
        Data emissao;
        Data vencimento;
        Dinheiro valor;

    public:
        void setCodigo(const CodigoDeTitulo&);
        CodigoDeTitulo getCodigo() const;

        void setEmissor(const Nome&);
        Nome getEmissor() const;

        void setSetor(const Setor&);
        Setor getSetor() const;

        void setEmissao(const Data&);
        Data getEmissao() const;

        void setVencimento(const Data&);
        Data getVencimento() const;

        void setValor(const Dinheiro&);
        Dinheiro getValor() const;
};

#endif
