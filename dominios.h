#ifndef DOMINIOS_H
#define DOMINIOS_H

#include <string>
#include <stdexcept>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

/**
 * Senha no formato XXXXXX, em que é um dígito de 0-9. Não pode haver dígitos duplicados e o primeiro dígito deve ser diferente de 0.
 * A senha não pode ser uma sequência crescente ou decresente de dígitos.
 */
//Matricula: 170153169
class Senha {
    private:
        std::string valor;
        void validar(const std::string&);

    public:
        /**
         * @brief Atualiza o valor da Senha.\n
         * Senha no formato XXXXXX, em que é um dígito de 0-9. Não pode haver dígitos duplicados e o primeiro dígito deve ser diferente de 0.
         * A senha não pode ser uma sequência crescente ou decresente de dígitos.
         * @param valor (string).
         * @throw Lança invalid_argument caso valor seja inválido.
         */
        void setValor(const std::string&);
        /**
         * @brief Retorna o valor atual da Senha.
         * @return valor (string).
         */
        std::string getValor() const;
};

/**
 * Possíveis Valores:\n Agricultura\n Construcao civil\n Energia\n Financas\n Imobiliario\n Papel e celulose\n 
 * Pecuaria\n Quimica e petroquimica\n Metalurgia e siderurgia\n Mineracao\n
 */
//Matricula: 170153169
class Setor {
    private:
        std::string valor;
        void validar(const std::string&);

    public:
        /**
         * @brief Atualiza o valor do Setor.\n
         * Novo valor deve pertencer aos valores listados na documentação da classe.
         * @param valor (string)
         * @throw Lança invalid_argument caso valor seja inválido.
         */
        void setValor(const std::string&);
        /**
         * @brief Retorna o valor atual do Setor.
         * @return valor (double)
         */
        std::string getValor() const;
};

/**
 * Dinheiro, em reais. Valor de 0 a 1.000.000,00.
 */
//Matricula: 170153169
class Dinheiro {
    private:
        double valor;
        void validar(double valor);

    public:
        /**
         * @brief Retorna o valor atual do Dinheiro.
         * @return valor (double)
         */
        double getValor() const;
        /**
         * @brief Atualiza o valor do Dinheiro\n
         * Valor deve ser de 0 a 1.000.000,00
         * @param valor (double)
         * @throw Lança invalid_argument caso valor seja inválido.
         */
        void setValor(double valor);
};

/**
 * CPF no formato XXX.XXX.XXX-CC, em que X é dígito de 0-9 e C é dígito de verificação do CPF.
 */
//Matricula: 231036050
class CPF {
    private:
        string valor;
        void validar(const string&);

    public:
        /**
         * @brief Retorna o valor atual do CPF.
         * @return valor (string)
         */
        const string getValor();
        /**
         * @brief Atualiza o valor do CPF.\n
         * Novo valor deve ser no formato XXX.XXX.XXX-CC. Dígitos de verificação são validados.
         * @param valor (string)
         * @throw Lança invalid_argument caso valor seja inválido.
         */
        void setValor(const string&);
};

inline const string CPF::getValor() {
    return valor;
}

/**
 * Data no formato DD-MM-AAAA, em que DD é dia, MM é mês e AAAA é ano.
 */
//Matricula: 231036050
class Data {
    private:
        string valor;
        void validar(const string&);

    public:
        /**
         * @brief Retorna o valor atual da Data.
         * @return valor (string)
         */
        const string getValor();
        /**
         * @brief Atualiza o valor da Data.\n
         * @param valor (string)
         * @throw Lança invalid_argument caso valor seja inválido.
         */
        void setValor(const string&);
};

inline const string Data::getValor() {
    return valor;
}

/**
 * Estado. Possíveis valores:\n
 * Previsto\n Liquidado\n Inadimplente
 */
//Matricula: 231036050
class Estado {
    private:
        string valor;
        void validar(const string&);
    public:
        /**
         * @brief Retorna o valor atual do Estado.
         * @return valor (string)
         */
        const string getValor();
        /**
         * @brief Atualiza o valor do Estado.\n
         * Data deve ser no formato DD-MM-AAAA. Ano deve ser de 2000 a 2100. É verificado se a data existe.
         * @param valor (string)
         * @throw Lança invalid_argument caso valor seja inválido.
         */
        void setValor(const string&);
};

//Matricula: 231036050
inline const string Estado::getValor() {
    return valor;
}

//Matricula: 170102785
class Nome {
    private:
        std::string valor;
        void validar(const std::string &);
    public:
        void setValor(const std::string &);
        std::string getValor() const;
};

//Matricula: 170102785
class Percentual {
    private:
        int valor;
        void validar(int);
    public:
        void setValor(int);
        int getValor() const;
};

//Matricula: 180043013
class CodigoDePagamento {
    private:
        string valor;
        void validar(const string&);

    public:
        const string getValor();
        void setValor(const string&);
};

//Matricula: 180043013
inline const string CodigoDePagamento::getValor() {
    return valor;
}

//Matricula: 180043013
class CodigoDeTitulo {
    private:
        char codigo[12];
        void validar(const char* valor);

    public:
        const char* getValor() const;
        void setValor(const char* valor);
};

#endif
