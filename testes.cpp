#include "testes.h"
#include <string.h>
#include <iostream>

using namespace std;

const string TUSenha::VALOR_VALIDO = "123789";
const string TUSenha::VALOR_INVALIDO = "123";

void TUSenha::setUp() {
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown() {
    delete senha;
}

void TUSenha::testarCenarioSucesso() {
    try {
        senha->setValor(VALOR_VALIDO);
        if (senha->getValor() != VALOR_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha() {
    try {
        senha->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        return;
    }
}

int TUSenha::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

const string TUSetor::VALOR_VALIDO = "Agricultura";
const string TUSetor::VALOR_INVALIDO = "InvalidSetor";

void TUSetor::setUp() {
    setor = new Setor();
    estado = SUCESSO;
}

void TUSetor::tearDown() {
    delete setor;
}

void TUSetor::testarCenarioSucesso() {
    try {
        setor->setValor(VALOR_VALIDO);
        if (setor->getValor() != VALOR_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUSetor::testarCenarioFalha() {
    try {
        setor->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        return;
    }
}

int TUSetor::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

const string TUNome::VALOR_VALIDO = "Fulano de Tal";
const string TUNome::VALOR_INVALIDO = "";

void TUNome::setUp() {
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown() {
    delete nome;
}

void TUNome::testarCenarioSucesso() {
    try {
        nome->setValor(VALOR_VALIDO);
        if (nome->getValor() != VALOR_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha() {
    try {
        nome->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        return;
    }
}

int TUNome::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

const int TUPercentual::VALOR_VALIDO = 85;
const int TUPercentual::VALOR_INVALIDO = -10;

void TUPercentual::setUp() {
    percentual = new Percentual();
    estado = SUCESSO;
}

void TUPercentual::tearDown() {
    delete percentual;
}

void TUPercentual::testarCenarioSucesso() {
    try {
        percentual->setValor(VALOR_VALIDO);
        if (percentual->getValor() != VALOR_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUPercentual::testarCenarioFalha() {
    try {
        percentual->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        return;
    }
}

int TUPercentual::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUData::setUp() {
    estado = SUCESSO;
    data = new Data();
}

void TUData::tearDown() {
    delete data;
}

void TUData::testarCenarioSucesso() {
    for (string valor : valores_validos) {
        try {
            data->setValor(valor);
            if (data->getValor() != valor) {
                estado = FALHA;
            }
        }
        catch (invalid_argument &excecao) {
            estado = FALHA;
        }
    }
}

void TUData::testarCenarioFalha() {
    for (string valor : valores_invalidos) {
        try {
            data->setValor(valor);
            estado = FALHA;
        }
        catch (invalid_argument &excecao) {
            return;
        }
    }
}

bool TUData::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUCPF::setUp() {
    cpf = new CPF();
    estado = SUCESSO;
}

void TUCPF::tearDown() {
    delete cpf;
}

void TUCPF::testarCenarioSucesso() {
    for (string valor : valores_validos) {
        try {
            cpf->setValor(valor);
            if (cpf->getValor() != valor) {
                estado = FALHA;
            }
        }
        catch (invalid_argument &excecao) {
            estado = FALHA;
        }
    }
}

void TUCPF::testarCenarioFalha() {
    for (string valor : valores_invalidos) {
        try {
            cpf->setValor(valor);
            estado = FALHA;
        }
        catch (invalid_argument &excecao) {
            return;
        }
    }
}

bool TUCPF::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUEstado::setUp() {
    estado_teste = new Estado;
    estado = SUCESSO;
}

void TUEstado::tearDown() {
    delete estado_teste;
}

void TUEstado::testarCenarioSucesso() {
    for (string valor : valores_validos) {
        try {
            estado_teste->setValor(valor);
            if (estado_teste->getValor() != valor) {
                estado = FALHA;
            }
        }
        catch (invalid_argument &excecao) {
            estado = FALHA;
        }
    }
}

void TUEstado::testarCenarioFalha() {
    for (string valor : valores_invalidos) {
        try {
            estado_teste->setValor(valor);
            estado = FALHA;
        }
        catch (invalid_argument &excecao) {
            return;
        }
    }
}

bool TUEstado::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUCodigoDePagamento::setUp() {
    codigo_de_pagamento = new CodigoDePagamento();
    estado = SUCESSO;
}

void TUCodigoDePagamento::tearDown() {
    delete codigo_de_pagamento;
}

void TUCodigoDePagamento::testarCenarioSucesso() {
    for (string valor : valores_validos) {
        try {
            codigo_de_pagamento->setValor(valor);
            if (codigo_de_pagamento->getValor() != valor) {
                estado = FALHA;
            }
        }
        catch (invalid_argument &excecao) {
            estado = FALHA;
        }
    }
}

void TUCodigoDePagamento::testarCenarioFalha() {
    for (string valor : valores_invalidos) {
        try {
            codigo_de_pagamento->setValor(valor);
            estado = FALHA;
        }
        catch (invalid_argument &excecao) {
            return;
        }
    }
}

bool TUCodigoDePagamento::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUPagamento::setUp() {
    pagamento = new Pagamento();
    percentual = new Percentual();
    codigo = new CodigoDePagamento();
    data = new Data();
    estado_teste = new Estado();
    estado = SUCESSO;
}

void TUPagamento::tearDown() {
    delete pagamento;
    delete percentual;
    delete codigo;
    delete data;
    delete estado_teste;
}

void TUPagamento::test() {
    int valor_percentual = stoi(valores[0]);
    string valor_codigo = valores[1], valor_data = valores[2], valor_estado = valores[3];

    percentual->setValor(valor_percentual);
    codigo->setValor(valores[1]);
    data->setValor(valores[2]);
    estado_teste->setValor(valores[3]);

    pagamento->setPercentual(*percentual);
    pagamento->setCodigo(*codigo);
    pagamento->setData(*data);
    pagamento->setEstado(*estado_teste);

    if (pagamento->getPercentual().getValor() != valor_percentual || pagamento->getCodigo().getValor() != valor_codigo || pagamento->getData().getValor() != valor_data || pagamento->getEstado().getValor() != valor_estado) {
        estado = FALHA;
    }
}

bool TUPagamento::run() {
    setUp();
    test();
    tearDown();
    return estado;
}

void TUConta::setUp() {
    conta = new Conta();
    estado = SUCESSO;
}

void TUConta::tearDown() {
    delete conta;
}

void TUConta::test() {
    
    CPF valor_cpf;
    try {
        valor_cpf.setValor("123.456.789-09");
    } catch (const std::invalid_argument& e) {
        estado = FALHA;
    }

    Nome valor_nome;
    try {
        valor_nome.setValor("João da Silva");
    } catch (const std::invalid_argument& e) {
        estado = FALHA;
    }

    Senha valor_senha;
    try {
        valor_senha.setValor("123789");
    } catch (const std::invalid_argument& e) {
        estado = FALHA;
    }

    conta->setCpf(valor_cpf);
    conta->setNome(valor_nome);
    conta->setSenha(valor_senha);

    if (conta->getCpf().getValor() != "123.456.789-09" || conta->getNome().getValor() != "João da Silva" || conta->getSenha().getValor() != "123789") {
        estado = FALHA;
    }
}

bool TUConta::run() {
    setUp();
    test();
    tearDown();
    return estado;
}

void TUTitulo::setUp() {
    titulo = new Titulo();
    estado = SUCESSO;
}

void TUTitulo::tearDown() {
    delete titulo;
}

void TUTitulo::test() {
    CodigoDeTitulo valor_codigo;
    try {
        std::string codigo_titulo = "CDB1234ABCD"; 
        valor_codigo.setValor(codigo_titulo.c_str());
    } catch (const std::invalid_argument& e) {
        estado = FALHA;
    }

    Nome valor_emissor;
    try {
        valor_emissor.setValor("Empresa X");
    } catch (const std::invalid_argument& e) {
        estado = FALHA;
    }

    Setor valor_setor;
    try {
        valor_setor.setValor("Agricultura");
    } catch (const std::invalid_argument& e) {
        estado = FALHA;
    }

    Data valor_emissao;
    try {
        valor_emissao.setValor("01-01-2024");
    } catch (const std::invalid_argument& e) {
        estado = FALHA;
    }

    Data valor_vencimento;
    try {
        valor_vencimento.setValor("01-02-2024");
    } catch (const std::invalid_argument& e) {
        estado = FALHA;
    }

    Dinheiro valor_valor;
    try {
        valor_valor.setValor(1000.0);
    } catch (const std::invalid_argument& e) {
        estado = FALHA;
    }

    try {
        titulo->setCodigo(valor_codigo);
        titulo->setEmissor(valor_emissor);
        titulo->setSetor(valor_setor);
        titulo->setEmissao(valor_emissao);
        titulo->setVencimento(valor_vencimento);
        titulo->setValor(valor_valor);
        std::string codigo_obtido = titulo->getCodigo().getValor();
  
        if (codigo_obtido != "CDB1234ABCD") {
            estado = FALHA;
        } else {
        }

        if (titulo->getEmissor().getValor() != "Empresa X") {
            estado = FALHA;
        } else {
        }

        if (titulo->getSetor().getValor() != "Agricultura") {
            estado = FALHA;
        } else {
        }

        if (titulo->getEmissao().getValor() != "01-01-2024") {
            estado = FALHA;
        } else {
        }

        if (titulo->getVencimento().getValor() != "01-02-2024") {
            estado = FALHA;
        } else {
        }

        if (titulo->getValor().getValor() != 1000.0) {
            estado = FALHA;
        } else {
        }
    } catch (const std::invalid_argument& e) {
        estado = FALHA;
    }
}

bool TUTitulo::run() {
    setUp();
    test();
    tearDown();
    return estado;
}


const int TUCodigoDeTitulo::SUCESSO;
const int TUCodigoDeTitulo::FALHA;

void TUCodigoDeTitulo::setUp() {
    codigo_de_titulo = new CodigoDeTitulo();
    estado = SUCESSO;
}

void TUCodigoDeTitulo::tearDown() {
    delete codigo_de_titulo;
}

void TUCodigoDeTitulo::testarCenarioSucesso() {
    for (const std::string &valor : valores_validos) {
        try {
            codigo_de_titulo->setValor(valor.c_str());
            if (codigo_de_titulo->getValor() != valor) {
                estado = FALHA;
            }
        } catch (std::invalid_argument &excecao) {
            estado = FALHA;
        }
    }
}

void TUCodigoDeTitulo::testarCenarioFalha() {
    for (const std::string &valor : valores_invalidos) {
        try {
            codigo_de_titulo->setValor(valor.c_str());
            estado = FALHA;
        } catch (std::invalid_argument &excecao) {
        }
    }
}

int TUCodigoDeTitulo::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    if (estado == SUCESSO) {
        std::cout << "Teste de Código de Título passou.\n";
    } else {
        std::cout << "Teste de Código de Título falhou.\n";
    }
    return estado;
}


const double TUDinheiro::VALOR_VALIDO = 987654.32;
const double TUDinheiro::VALOR_INVALIDO = -10.0;

void TUDinheiro::setUp() {
    dinheiro = new Dinheiro();
    estado = SUCESSO;
}

void TUDinheiro::tearDown() {
    delete dinheiro;
}

void TUDinheiro::testarCenarioSucesso() {
    try {
        dinheiro->setValor(VALOR_VALIDO);
        if (dinheiro->getValor() != VALOR_VALIDO) {
            estado = FALHA;
        } else {
        }
    } catch (std::invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUDinheiro::testarCenarioFalha() {
    try {
        dinheiro->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (std::invalid_argument &excecao) {
    }
}

int TUDinheiro::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    if (estado == SUCESSO) {
        std::cout << "Teste de Dinheiro passou.\n";
    } else {
        std::cout << "Teste de Dinheiro falhou.\n";
    }
    return estado;
}


