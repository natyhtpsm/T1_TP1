#include "entidades.h"
#include <iostream>

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

void Pagamento::setCodigo(const CodigoDePagamento &codigo) {
    this->codigo = codigo;
}

void Pagamento::setData(const Data &data) {
    this->data = data;
}

void Pagamento::setEstado(const Estado &estado) {
    this->estado = estado;
}

void Pagamento::setPercentual(const Percentual &percentual) {
    this->percentual = percentual;
}

void Conta::setCpf(const CPF &cpf) {
    CPF tempCpf = cpf; 
    this->cpf = cpf;
}

CPF Conta::getCpf() const {
    return cpf;
}

void Conta::setNome(const Nome &nome) {
    Nome tempNome = nome; 
    this->nome = nome;
}

Nome Conta::getNome() const {
    return nome;
}

void Conta::setSenha(const Senha &senha) {
    Senha tempSenha = senha; 
    this->senha = senha;
}

Senha Conta::getSenha() const {
    return senha;
}

void Titulo::setCodigo(const CodigoDeTitulo &codigo) {
    CodigoDeTitulo tempCodigo = codigo;
    this->codigo = codigo;
}

CodigoDeTitulo Titulo::getCodigo() const {
    return codigo;
}


void Titulo::setEmissor(const Nome &emissor) {
    Nome tempEmissor = emissor;
    this->emissor = emissor;
}

Nome Titulo::getEmissor() const {
    return emissor;
}

void Titulo::setSetor(const Setor &setor) {
    Setor tempSetor = setor;
    this->setor = setor;
}

Setor Titulo::getSetor() const {
    return setor;
}

void Titulo::setEmissao(const Data &emissao) {
    Data tempEmissao = emissao;
    this->emissao = emissao;
}

Data Titulo::getEmissao() const {
    return emissao;
}

void Titulo::setVencimento(const Data &vencimento) {
    Data tempVencimento = vencimento;
    this->vencimento = vencimento;
}

Data Titulo::getVencimento() const {
    return vencimento;
}

void Titulo::setValor(const Dinheiro &valor) {
    Dinheiro tempValor = valor;
    this->valor = valor;
}

Dinheiro Titulo::getValor() const {
    return valor;
}