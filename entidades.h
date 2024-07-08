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

//Matricula: 170153169
inline std::string Conta::getCpf() {
    return cpf;
}

//Matricula: 170153169
inline std::string Conta::getNome() {
    return nome;
}

//Matricula: 170153169
inline std::string Conta::getSenha() {
    return senha;
}

//Matricula: 170153169
class Titulo {
    private:
        std::string codigo; 
        std::string emissor;
        std::string setor;
        std::string emissao;
        std::string vencimento;
        double valor;

    public:
        void setCodigo(const std::string&);
        std::string getCodigo();

        void setEmissor(const std::string&);
        std::string getEmissor();

        void setSetor(const std::string&);
        std::string getSetor();

        void setEmissao(const std::string&);
        std::string getEmissao();

        void setVencimento(const std::string&);
        std::string getVencimento();

        void setValor(double);
        double getValor();
};

//Matricula: 170153169
inline std::string Titulo::getCodigo() {
    return codigo;
}

//Matricula: 170153169
inline std::string Titulo::getEmissor() {
    return emissor;
}

//Matricula: 170153169
inline std::string Titulo::getSetor() {
    return setor;
}

//Matricula: 170153169
inline std::string Titulo::getEmissao() {
    return emissao;
}

//Matricula: 170153169
inline std::string Titulo::getVencimento() {
    return vencimento;
}

//Matricula: 170153169
inline double Titulo::getValor() {
    return valor;
}

#endif
