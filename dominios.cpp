#include "dominios.h"
#include <algorithm>

void Senha::validar(const std::string &valor) {
    if (valor.length() != 6) {
        throw std::invalid_argument("Senha deve ter 6 digitos.");
    }
    if (!isdigit(valor[0]) || valor[0] == '0') {
        throw std::invalid_argument("Primeiro digito deve ser entre 1 e 9.");
    }
    for (char c : valor) {
        if (!isdigit(c)) {
            throw std::invalid_argument("Senha deve conter apenas digitos.");
        }
    }
    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            if (valor[i] == valor[j]) {
                throw std::invalid_argument("Nao pode haver digitos duplicados.");
            }
        }
    }
    if ((valor == "123456") || (valor == "654321")) {
        throw std::invalid_argument("Senha nao pode ser sequencia crescente ou decrescente.");
    }
}

void Senha::setValor(const std::string &valor) {
    validar(valor);
    this->valor = valor;
}

std::string Senha::getValor() const {
    return valor;
}

void Setor::validar(const std::string &valor) {
    const std::vector<std::string> setoresValidos = {
        "Agricultura", "Construcao civil", "Energia", "Financas", 
        "Imobiliario", "Papel e celulose", "Pecuaria", 
        "Quimica e petroquimica", "Metalurgia e siderurgia", "Mineracao"
    };
    if (std::find(setoresValidos.begin(), setoresValidos.end(), valor) == setoresValidos.end()) {
        throw std::invalid_argument("Setor invalido.");
    }
}

void Setor::setValor(const std::string &valor) {
    validar(valor);
    this->valor = valor;
}

std::string Setor::getValor() const {
    return valor;
}
