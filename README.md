# Trabalho 1 - Técnicas de Programação 1 (UnB)

## 📝 Descrição
Este projeto implementa diversas classes de domínio e entidades para um sistema de gerenciamento que inclui a validação de diferentes tipos de dados, como código de pagamento, código de título, CPF, data, dinheiro, estado, nome, percentual, senha e setor. O objetivo é garantir que todos os dados sigam regras específicas de formatação e validação.

## 🚀 Funcionalidades
- **Validação de Dados**: Valida diversos tipos de dados para garantir que sigam regras específicas.
- **Gestão de Entidades**: Permite a criação de entidades que utilizam os dados validados.

## 💻 Domínios e Métodos Utilizados
### Classe Código de Pagamento
- **Formato**: XXXXXXXX (X é dígito, primeiro dígito é diferente de zero)
- `validar`: Valida o formato do código de pagamento.
- `setValor`: Define o valor do código de pagamento após validação.
- `getValor`: Retorna o valor do código de pagamento.

### Classe Código de Título
- **Formato**: Prefixos (CDB, CRA, CRI, LCA, LCI, DEB) seguidos por XXXXXXXX (X é letra maiúscula ou dígito)
- `validar`: Valida o formato do código de título.
- `setValor`: Define o valor do código de título após validação.
- `getValor`: Retorna o valor do código de título.

### Classe CPF
- **Formato**: XXX.XXX.XXX-CC (X é dígito, CC são caracteres de validação)
- `validar`: Valida o formato e os caracteres de validação do CPF.
- `setValor`: Define o valor do CPF após validação.
- `getValor`: Retorna o valor do CPF.

### Classe Data
- **Formato**: DD-MM-AAAA (DD: 01-31, MM: 01-12, AAAA: 2000-2100)
- `validar`: Valida o formato e os valores da data.
- `setValor`: Define o valor da data após validação.
- `getValor`: Retorna o valor da data.

### Classe Dinheiro
- **Valor**: 0 a 1.000.000,00
- `validar`: Valida o valor de dinheiro.
- `setValor`: Define o valor de dinheiro após validação.
- `getValor`: Retorna o valor de dinheiro.

### Classe Estado
- **Valores Permitidos**: Previsto, Liquidado, Inadimplente
- `validar`: Valida o estado.
- `setValor`: Define o valor do estado após validação.
- `getValor`: Retorna o valor do estado.

### Classe Nome
- **Formato**: Um ou dois termos, cada termo com 3 a 10 caracteres, cada caractere é letra, termos são separados por um espaço, primeiro caractere de cada termo é letra maiúscula.
- `validar`: Valida o formato do nome.
- `setValor`: Define o valor do nome após validação.
- `getValor`: Retorna o valor do nome.

### Classe Percentual
- **Valor**: 0 a 100
- `validar`: Valida o valor percentual.
- `setValor`: Define o valor percentual após validação.
- `getValor`: Retorna o valor percentual.

### Classe Senha
- **Formato**: XXXXXX (X é dígito, primeiro dígito é diferente de zero, não há dígito duplicado, não é sequência crescente ou decrescente)
- `validar`: Valida o formato da senha.
- `setValor`: Define o valor da senha após validação.
- `getValor`: Retorna o valor da senha.

### Classe Setor
- **Valores Permitidos**: Agricultura, Construção civil, Energia, Finanças, Imobiliário, Papel e celulose, Pecuária, Química e petroquímica, Metalurgia e siderurgia, Mineração
- `validar`: Valida o setor.
- `setValor`: Define o valor do setor após validação.
- `getValor`: Retorna o valor do setor.

## 📖 Estrutura do Projeto
O projeto está estruturado da seguinte forma:

- **dominios.h**: Contém as definições das classes de domínio.
- **dominios.cpp**: Implementa os métodos das classes de domínio.
- **entidades.h**: Define as classes de entidade que utilizam os domínios.
- **entidades.cpp**: Implementa os métodos das classes de entidade.
- **main.cpp**: Contém o código principal para testar as funcionalidades do projeto.


## 📦 Como Compilar e Executar
Para compilar e executar o projeto, siga os passos abaixo:

1. **Compilar os arquivos:**
   ```sh
   g++ -o programa dominios.cpp entidades.cpp main.cpp
   ```

2. **Executar o programa:**
   ```sh
   ./programa
   ```

