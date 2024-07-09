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

/**
 * Composto por:\n
 *  código (CodigoDePagamento)\n
 *  data (Data)\n
 *  percentual (Percentual)\n
 *  estado (Estado)\n
 */
//Matricula: 231036050
class Pagamento {
    private:
        CodigoDePagamento codigo;
        Data data;
        Percentual percentual;
        Estado estado;

    public:
        /**
         * @brief Atualiza a intância do código.
         * @param codigo (CodigoDePagamento)
         */
        void setCodigo(const CodigoDePagamento&);
        /**
         * @brief Retorna a instância do código.
         * @return codigo (CodigoDePagamento)
         */
        CodigoDePagamento getCodigo();

        /**
         * @brief Atualiza a instância da data.
         * @param data (Data)
         */
        void setData(const Data&);
        /**
         * @brief Retorna a instância da data.
         * @return data (Data)
         */
        Data getData();

        /**
         * @brief Atualiza a instância do percentual.
         * @param percentual (Percentual)
         */
        void setPercentual(const Percentual&);
        /**
         * @brief Retorna a instância do percentual.
         * @return percentual (Percentual)
         */
        Percentual getPercentual();

        /**
         * @brief Atualiza a instância do estado.
         * @param estado (Estado)
         */
        void setEstado(const Estado&);
        /**
         * @brief Retorna a instância do estado.
         * @return estado (Estado)
         */
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

inline std::string Conta::getCpf() {
    return cpf;
}

inline std::string Conta::getNome() {
    return nome;
}

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

inline std::string Titulo::getCodigo() {
    return codigo;
}

inline std::string Titulo::getEmissor() {
    return emissor;
}

inline std::string Titulo::getSetor() {
    return setor;
}

inline std::string Titulo::getEmissao() {
    return emissao;
}

inline std::string Titulo::getVencimento() {
    return vencimento;
}

inline double Titulo::getValor() {
    return valor;
}

#endif
