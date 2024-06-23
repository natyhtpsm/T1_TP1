#include "entidades.h"

void Entidade::setSenha(const Senha &senha) {
    this->senha = senha;
}

Senha Entidade::getSenha() const {
    return senha;
}

void Entidade::setSetor(const Setor &setor) {
    this->setor = setor;
}

Setor Entidade::getSetor() const {
    return setor;
}

void Entidade::setCPF(const CPF &cpf) {
    this->cpf = cpf;
}

CPF Entidade::getCPF() const {
    return cpf;
}

void Entidade::setData(const Data &data) {
    this->data = data;
}

Data Entidade::getData() const {
    return data;
}

// void Entidade::setEstado(const Estado &estado) {
//     this->estado = estado;
// }

Estado Entidade::getEstado() const {
    return estado;
}

void Entidade::setNome(const Nome &nome) {
    this->nome = nome;
}

Nome Entidade::getNome() const {
    return nome;
}

void Entidade::setPercentual(const Percentual &percentual) {
    this->percentual = percentual;
}

Percentual Entidade::getPercentual() const {
    return percentual;
}

void Entidade::setCodigoPagamento(const CodigoDePagamento &codigoPagamento) {
    this->codigoPagamento = codigoPagamento;
}

CodigoDePagamento Entidade::getCodigoPagamento() const {
    return codigoPagamento;
}

void Entidade::setCodigoTitulo(const CodigoDeTitulo &codigoTitulo) {
    this->codigoTitulo = codigoTitulo;
}

CodigoDeTitulo Entidade::getCodigoTitulo() const {
    return codigoTitulo;
}

void Entidade::setDinheiro(const Dinheiro &dinheiro) {
    this->dinheiro = dinheiro;
}

Dinheiro Entidade::getDinheiro() const {
    return dinheiro;
}
