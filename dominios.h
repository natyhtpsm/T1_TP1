#ifndef DOMINIOS_H
#define DOMINIOS_H

#include <string>
#include <stdexcept>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

//Matricula: 170153169
class Senha {
    private:
        std::string valor;
        void validar(const std::string&);

    public:
        void setValor(const std::string&);
        std::string getValor() const;
};

//Matricula: 170153169
class Setor {
    private:
        std::string valor;
        void validar(const std::string&);

    public:
        void setValor(const std::string&);
        std::string getValor() const;
};

//Matricula: 170153169
class Dinheiro {
    private:
        double valor;
        void validar(double valor);

    public:
        double getValor() const;
        void setValor(double valor);
};

//Matricula: 231036050
class CPF {
    private:
        string valor;
        void validar(const string&);

    public:
        const string getValor();
        void setValor(const string&);
};

//Matricula: 231036050
inline const string CPF::getValor() {
    return valor;
}

//Matricula: 231036050
class Data {
    private:
        string valor;
        void validar(const string&);

    public:
        const string getValor();
        void setValor(const string&);
};

//Matricula: 231036050
inline const string Data::getValor() {
    return valor;
}

//Matricula: 231036050
class Estado {
    private:
        string valor;
        void validar(const string&);
    public:
        const string getValor();
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
