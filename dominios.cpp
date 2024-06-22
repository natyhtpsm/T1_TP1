#include "dominios.h"
#include <algorithm>
#include <vector>

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

//---------CPF-----------------------------------------------------------------------------------
void CPF::setValor(const string &cpf) {
    this->validar(cpf);
    valor = cpf;
}

void CPF::validar(const string &cpf) {
    int digito_verificacao1 = 0, digito_verificacao2 = 0;

    //verifica se o tamanho é 14
    if (cpf.length() != 14) {
        throw invalid_argument("CPF deve ter 14 caracteres");
    }

    //verifica se o formato está correto
    for (int index=0; index<14; index++) {
        switch (cpf[index]) {

            //verifica se os devidos caracteres são dígitos
            case 0 ... 2:
            case 4 ... 6:
            case 8 ... 10:
            case 12 ... 13:
                if ( !isdigit(cpf[index]) ) {
                    throw invalid_argument("CPF deve ser no formato XXX.XXX.XXX-CC (caracter deveria ser digito)");
                }
                break;
            
            //verifica se os devidos caracteres são '.'
            case 3:
            case 7:
                if ( cpf[index] != '.' ) {
                    throw invalid_argument("CPF deve ser no formato XXX.XXX.XXX-CC (caracter deveria ser .)");
                }
                break;

            //verifica se o devido caracter é '-'
            case 11:
                if ( cpf[index] != '-' ) {
                    throw invalid_argument("CPF deve ser no formato XXX.XXX.XXX-CC (caracter deveria ser -)");
                }
                break;
        }
    }

    //calcula o primeiro digito de validação
    int aux = 10;
    for (char digito : cpf) {
        //converte cada digito pra int
        int digito_int = digito - '0';

        if (digito == '.') {
            continue;
        }
        if (digito == '-') {
            break;
        }
        digito_verificacao1 += digito_int*aux;
        aux--;
    }

    digito_verificacao1 %= 11;
    if (digito_verificacao1 < 2) {
        digito_verificacao1 = 0;
    }
    else {
        digito_verificacao1 = 11 - digito_verificacao1;
    }

    //valida o primeiro digito de verificação
    if (int(cpf.at(12)) - 48 != digito_verificacao1) {
        throw invalid_argument("Argumento invalido");
    }

    //calcula o segundo digito de verificação
    aux = 11;
    for (char digito : cpf) {
        if (aux < 2) {
            break;
        }
        int digito_int = int(digito) - 48;
        if (digito == '.' || digito == '-') {
            continue;
        }
        digito_verificacao2 += aux*digito_int;
        aux--;
    }
    digito_verificacao2 %= 11;
    if (digito_verificacao2 < 2) {
        digito_verificacao2 = 0;
    }
    else {
        digito_verificacao2 = 11 - digito_verificacao2;
    }
    //valida o segundo digito de verificação
    if (int(cpf.at(13))-48 != digito_verificacao2) {
        throw invalid_argument("Argumento invalido");
    }
}

//---------Data-----------------------------------------------------------------------------------
void Data::setValor(const string &data) {
    this->validar(data);
    valor = data;
}

void Data::validar(const string &data) {
    //vefica o tamanho
    if (data.length() != 10) {
        throw invalid_argument("Tamanho do argumento invalido");
    }

    //verifica formato
    int index = 0;
    for (char caracter : data) {
        switch (index) {
            case 2:
            case 5:
            //verifica se são hífens nos indices 2 e 5
                if (caracter != '-') {
                    throw invalid_argument("Data deve ser no formato DD-MM-AAAA (caracter deveria ser -)");
                }
                break;
            //verifica se são digitos nos índices restantes
            default:
                if (!isdigit(caracter)) {
                    throw invalid_argument("Data deve ser no formato DD-MM-AAAA (caracter deveria ser digito)");
                }
                break;
        }
        index++;
    }

//verifica se a data é válida
    bool eh_bissexto;
    int dias_no_mes, ano, mes, dia;
    string temp;

    //define o valor do ano
    temp = data[6];
    for (int i=7; i < 10; i++) {
        temp += data[i];
    }
    ano = stoi(temp);

    //verifica se o ano é válido
    if (ano < 2000 || ano > 2100) {
        throw invalid_argument("Ano não é válido");
    }
    //verifica se o ano é bissexto
    if (ano%4 == 0) {
        eh_bissexto = true;
    }

    //define o valor do mês
    temp = data[3];
    temp += data[4];
    mes = stoi(temp);

    //verifica se o mês é válido
    if (mes < 1 || mes > 12) {
        throw invalid_argument("Mes nao e valido");
    }
    //define quantos dias tem no mês
    switch (mes) {
        //fevereiro
        case 2:
            if (eh_bissexto) {
                dias_no_mes = 29;
            }
            else {
                dias_no_mes = 28;
            }
            break;
        //meses com 30 dias
        case 4:
        case 6:
        case 9:
        case 11:
            dias_no_mes = 30;
            break;
        //meses com 31 dias
        default:
            dias_no_mes = 31;
            break;    
    }  

    //define o valor do dia
    temp = data[0];
    temp += data[1];
    dia = stoi(temp);

    //verifica se o dia é válido
    if (dia < 1 || dia > dias_no_mes) {
        throw invalid_argument("Dia nao e valido");
    }

}

//---------Estado-----------------------------------------------------------------------------------
void Estado::setValor(const string &estado) {
    this->validar(estado);
    valor = estado;
}

void Estado::validar(const string &estado) {
    for (string valido : estados_validos) {
        if (estado == valido) {
            return;
        }
    }
    throw invalid_argument("Argumento invalido");
}