#ifndef DOMINIOS_H
#define DOMINIOS_H

#include <string>
#include <stdexcept>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

class Senha {
private:
    std::string valor;
    void validar(const std::string&);

public:
    void setValor(const std::string&);
    std::string getValor() const;
};

class Setor {
private:
    std::string valor;
    void validar(const std::string&);

public:
    void setValor(const std::string&);
    std::string getValor() const;
};

class CPF {
    private:
        string valor;
        void validar(const string&);

    public:
        const string getValor();
        void setValor(const string&);
};

inline const string CPF::getValor() {
    return valor;
}

class Data {
    private:
        string valor;
        void validar(const string&);

    public:
        const string getValor();
        void setValor(const string&);
};

inline const string Data::getValor() {
    return valor;
}

class Estado {
    private:
        string valor;
        void validar(const string&);
    public:
        const string getValor();
        void setValor(const string&);
};

inline const string Estado::getValor() {
    return valor;
}

class Nome {
private:
    std::string valor;
    void validar(const std::string &);
public:
    void setValor(const std::string &);
    std::string getValor() const;
};

class Percentual {
private:
    int valor;
    void validar(int);
public:
    void setValor(int);
    int getValor() const;
};

class CodigoDePagamento {
    private:
        string valor;
        void validar(const string&);

    public:
        const string getValor();
        void setValor(const string&);
};

inline const string CodigoDePagamento::getValor() {
    return valor;
}

class CodigoDeTitulo {
private:
    char codigo[12];
    void validar(const char* valor);

public:
    const char* getValor() const;
    void setValor(const char* valor);
};

class Dinheiro {
private:
    double valor;
    void validar(double valor);

public:
    double getValor() const;
    void setValor(double valor);
};

#endif
