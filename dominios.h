#ifndef DOMINIOS_H
#define DOMINIOS_H

#include <string>
#include <stdexcept>

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

#endif
