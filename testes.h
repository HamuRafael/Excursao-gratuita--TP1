// Diretivas de compilação para controlar processo de inclusão.

#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

// Incluir cabeçalhos.

#include "dominios.h"
#include "entidades.h"

using namespace std;

// --------------------------------------------------------------------------
////Matricula: 202021749
// Felipe Dantas Borges
//Email

class TUEmail {
private:
    const static int VALOR_VALIDO   = "naruto2002&~@fmail12";   // Definição de constante para evitar número mágico.
    const static int VALOR_INVALIDO = "naruto2002@..fmail12&~";   // Definição de constante para evitar número mágico.
    Email *email;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};

// --------------------------------------------------------------------------
////Matricula: 202021749
// Felipe Dantas Borges
//Data

class TUData {
private:
    const static int VALOR_VALIDO   = "13-Abril-2002";   // Definição de constante para evitar número mágico.
    const static int VALOR_INVALIDO = "30-Fev-1999";   // Definição de constante para evitar número mágico.
    Data *data;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};

// --------------------------------------------------------------------------
////Matricula: 202021749
// Felipe Dantas Borges
//Endereco

class TUEndereco {
private:
    const static int VALOR_VALIDO   = "QTLP.214";   // Definição de constante para evitar número mágico.
    const static int VALOR_INVALIDO = "QTLP..2144545435447I9s";   // Definição de constante para evitar número mágico.
    Endereco *endereco;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};

// --------------------------------------------------------------------------
////Matricula: 202021749
// Felipe Dantas Borges
//Endereco

class TUTitulo {
private:
    const static int VALOR_VALIDO   = "Yosemite";   // Definição de constante para evitar número mágico.
    const static int VALOR_INVALIDO = "Yo..s3mite";   // Definição de constante para evitar número mágico.
    Titulo *titulo;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};

#endif // TESTES_H_INCLUDED
