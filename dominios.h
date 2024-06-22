#ifndef DOMINIOS_H
#define DOMINIOS_H

#include <string>
#include <stdexcept>

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
        const string estados_validos[3] = {"Previsto", "Liquidado", "Inadimplente"};
        string valor;
        void validar(const string&);
    public:
        const string getValor();
        void setValor(const string&);
};

inline const string Estado::getValor() {
    return valor;
}

#endif
