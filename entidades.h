#ifndef ENTIDADES_H
#define ENTIDADES_H

#include "dominios.h"

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

/**
 * Composta por:\n
 *  cpf (CPF)\n
 *  nome (Nome)\n
 *  senha (Senha)
 */
//Matricula: 170153169
class Conta {
    private:
        CPF cpf;
        Nome nome;
        Senha senha;

    public:
        /**
         * @brief Atualiza a instância do cpf.
         * @param cpf (CPF)
         */
        void setCpf(const CPF&);
        /**
         * @brief Retorna a instância do cpf.
         * @return cpf (CPF)
         */
        CPF getCpf() const;

        /**
         * @brief Atualiza a instância do nome.
         * @param nome (Nome)
         */
        void setNome(const Nome&);
        /**
         * @brief Retorna a instância do nome.
         * @return nome (Nome)
         */
        Nome getNome() const;

        /**
         * @brief Atualiza a instância da senha.
         * @param senha (Senha)
         */
        void setSenha(const Senha&);
        /**
         * @brief Retorna a instância da senha.
         * @return senha (Senha)
         */
        Senha getSenha() const;
};

/**
 * Composto por:\n
 *  código (CodigoDeTitulo)\n
 *  emissor (Nome)\n
 *  setor (Setor)\n
 *  emissão (Data)\n
 *  vencimento (Data)\n
 *  valor (Dinheiro)
 */
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
        /**
         * @brief Atualiza a instância do código.
         * @param codigo (CodigoDeTitulo)
         */
        void setCodigo(const CodigoDeTitulo&);
        /**
         * @brief Retorna a instância do código.
         * @return codigo (CodigoDeTitulo)
         */
        CodigoDeTitulo getCodigo() const;

        /**
         * @brief Atualiza a instância do emissor.
         * @param emissor (Nome)
         */
        void setEmissor(const Nome&);
        /**
         * @brief Retorna a instância do emissor.
         * @return emissor (Nome)
         */
        Nome getEmissor() const;

        /**
         * @brief Atualiza a instância do setor.
         * @param setor (Setor)
         */
        void setSetor(const Setor&);
        /**
         * @brief Retorna a instância do setor.
         * @return setor (Setor)
         */
        Setor getSetor() const;

        /**
         * @brief Atualiza a instância da emissão.
         * @param emissao (Data)
         */
        void setEmissao(const Data&);
        /**
         * @brief Retorna a instância da emissão.
         * @return emissao (Data)
         */
        Data getEmissao() const;

        /**
         * @brief Atualiza a instância do vencimento.
         * @param vencimento (Data)
         */
        void setVencimento(const Data&);
        /**
         * @brief Retorna a instância do vencimento.
         * @return vencimento (Data)
         */
        Data getVencimento() const;

        /**
         * @brief Atualiza a instância do valor.
         * @param valor (Dinheiro)
         */
        void setValor(const Dinheiro&);
        /**
         * @brief Retorna a instância do valor.
         * @return valor (Dinheiro)
         */
        Dinheiro getValor() const;
};

#endif
