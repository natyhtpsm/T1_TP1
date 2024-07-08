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
         * @brief Atualiza o valor da Senha.
         * 
         * Senha no formato XXXXXX, em que X é um dígito de 0-9. Não pode haver dígitos duplicados e o primeiro dígito deve ser diferente de 0.
         * A senha não pode ser uma sequência crescente ou decresente de dígitos.
         * @param valor (string).
         * @throw invalid_argument é lançado caso valor seja inválido.
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
         * @brief Atualiza o valor do Setor.
         * 
         * Novo valor deve pertencer aos valores listados na descrição da classe.
         * @param valor (string)
         * @throw invalid_argument é lançado caso valor seja inválido.
         */
        void setValor(const std::string&);
        /**
         * @brief Retorna o valor atual do Setor.
         * @return valor (string)
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
         * @brief Atualiza o valor do Dinheiro
         * 
         * Valor deve ser de 0 a 1.000.000,00
         * @param valor (double)
         * @throw invalid_argument é lançado caso valor seja inválido.
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
         * @brief Atualiza o valor do CPF.
         * 
         * Novo valor deve ser no formato XXX.XXX.XXX-CC. Dígitos de verificação são validados.
         * @param valor (string)
         * @throw invalid_argument é lançado caso valor seja inválido.
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
         * @brief Atualiza o valor da Data.
         * 
         * Data deve ser no formato DD-MM-AAAA. Ano deve ser de 2000 a 2100. É verificado se a data existe.
         * @param valor (string)
         * @throw invalid_argument é lançado caso valor seja inválido.
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
         * @brief Atualiza o valor do Estado.
         * 
         * Valor deve ser "Previsto", "Liquidado" ou "Inadimplente"
         * @param valor (string)
         * @throw invalid_argument é lançado caso valor seja inválido.
         */
        void setValor(const string&);
};

//Matricula: 231036050
inline const string Estado::getValor() {
    return valor;
}

/**
 * Nome, composto por um ou dois termos, separados por um espaço em branco. Cada termo tem de 3 a 10 caracteres,
 * que são letras (a-z, A-Z), e começa com letra maiúscula.
 */
//Matricula: 170102785
class Nome {
    private:
        std::string valor;
        void validar(const std::string &);
    public:
        /**
         * @brief Atualiza o valor do Nome.
         * 
         * Valor deve ser composto por um ou dois termos, separados por um espaço em branco. Cada termo tem de 3 a 10 caracteres,
         * que são letras (a-z, A-Z), e começa com letra maiúscula.
         * @param valor (string)
         * @throw invalid_argument é lançado caso valor seja inválido.
         */
        void setValor(const std::string &);
        /**
         * @brief Retorna o valor atual do Nome.\n
         * @return valor (string)
         */
        std::string getValor() const;
};

/**
 * Percentual, valor de 0 a 100.
 */
//Matricula: 170102785
class Percentual {
    private:
        int valor;
        void validar(int);
    public:
        /**
         * @brief Atualiza o valor do Percentual.
         * 
         * Valor deve ser número de 0 a 100.
         * @param valor (int)
         * @throw invalid_argument é lançado caso valor seja inválido.
         */
        void setValor(int);
        /**
         * @brief Retorna o valor atual do Percentual.
         * @return valor (int)
         */
        int getValor() const;
};

/**
 * Código no formato XXXXXXXX, em que X é dígito (0-9). Primeiro dígito é ser diferente de 0.
 */
//Matricula: 180043013
class CodigoDePagamento {
    private:
        string valor;
        void validar(const string&);

    public:
        /**
         * @brief Retorna o valor atual do Código de Pagamento
         * @return valor (string)
         */
        const string getValor();
        /**
         * @brief Atualiza o valor do Código de Pagamento.
         * 
         * Valor deve ser no formato XXXXXXXX, em que X é dígito (0-9). Primeiro dígito deve ser diferente de 0.
         * @param valor (string)
         * @throw invalid_argument é lançado caso valor seja inválido.
         */
        void setValor(const string&);
};

inline const string CodigoDePagamento::getValor() {
    return valor;
}

/**
 * Código em um dos seguintes formatos:\n
 * CDBXXXXXXXX\n
 * CRAXXXXXXXX\n
 * CRIXXXXXXXX\n
 * LCAXXXXXXXX\n
 * LCIXXXXXXXX\n
 * DEBXXXXXXXX\n
 * Em que X é dígito (0-9) ou letra maiúscula (A-Z)
 */
//Matricula: 180043013
class CodigoDeTitulo {
    private:
        char codigo[12];
        void validar(const char* valor);

    public:
        /**
         * @brief Retorna o valor atual do Código de Título.
         * @return valor (char*)
         */
        const char* getValor() const;
        /**
         * @brief Atualiza o valor do Código de Título.
         * 
         * Valor deve seguir o formato explicitado na descrição da classe.
         * @param valor (char*)
         * @throw Lança invalid_argument caso valor seja inválido.
         */
        void setValor(const char* valor);
};

#endif
