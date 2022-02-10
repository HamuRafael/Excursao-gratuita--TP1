#include "dominios.h"
#include<stdio.h>
#include<string.h>
#include<iostream>
using  namespace std;

// --------------------------------------------------------------------------
// Implementações de métodos de classe domínio.
// --------------------------------------------------------------------------
//Email:
//Matricula: 202021749
// Felipe Dantas Borges

void Email::validar(string valor){
    char p[valor.length()];
    int j;

    for (j = 0; j < sizeof(p); j++) {
        p[j] = valor[j];
    }
    //Separa no formato parte-local@dominio
    string plocal = strtok(p, "@");
    string dom;
    string p1(".");
    int ponto = 0;

    //Validacao parte-local
    if (plocal.length() > 64){
            throw invalid_argument("Argumento invalido.");
    }
    for (int i = 0; plocal[i] != '\0'; i++){
        string c;
        char c2;
        c2 = plocal[i];
        c = plocal[i];
        if (bool(c == p1) == 1){
            ++ ponto;
           if ((i == 0) | (i == plocal.length()-1)){
               throw invalid_argument("Argumento invalido.");
            }
           else if (ponto == 2){
               throw invalid_argument("Argumento invalido.");
            }
        }
        else if((!(isalnum(c2)) == 1) && (ispunct(c2) == 0)){
            throw invalid_argument("Argumento invalido.");
        }
    }
    //Validacao dominio
    char variavel;
    if (dom.length() > 253){
            throw invalid_argument("Argumento invalido.");
    }
    for (int i = 0; valor[i + 1 + plocal.length()] != '\0'; i++){
        string c;
        dom[i] = valor[i + 1 +plocal.length()];
        char c2;
        c2 = dom[i];
        c = dom[i];
        if (!(isalnum(c2)) == 1){
            if (c != "-"){//confere se tem hifen
               throw invalid_argument("Argumento invalido.");
            }
        }

        if (bool(c == p1) == 1){
            ++ ponto;
           if (i == 0){
               throw invalid_argument("Argumento invalido.");
            }
           else if (ponto == 2){
               throw invalid_argument("Argumento invalido.");
            }
        }

    }
}

void Email::setValor(string valor) {
    validar(valor);
    this->valor = valor;




// --------------------------------------------------------------------------
//Data:
//Matricula: 202021749
// Felipe Dantas Borges

void Data::validar(string valor){
    char p[valor.length()];
    int j;
    for (j = 0; j < sizeof(p); j++) {
        p[j] = valor[j];
    }
    //Separa no formato DD-MES-AAAA
    //Separa no formato DD-MES-AAAA
    string DDstr = strtok(p, "-");
    string MES = strtok(NULL, "-");
    string AAAAstr = strtok(NULL, "-");

    int DD = stoi(DDstr); //converte str para int
    int AAAA = stoi(AAAAstr); //converte str para int

    //Confere espaco amostral de dias
    if ((DD < 1) || (DD > 31)){
        throw invalid_argument("Argumento invalido.");
    }

    //Confere espaco amostral de Mes

    int i;
    bool found = false;
    string meses[12] = {"Jan","Fev","Mar","Abr","Mai","Jun","Jul","Ago","Set","Out","Nov","Dez"};

    for(i=0;i<12;i++){
        if(meses[i]==MES){
            found = true;
        }
    }
    if(found==false){
        throw invalid_argument("Argumento invalido.");
    }




    //Confere espaco amostral de Anos
    if ((AAAA < 2000) || (AAAA > 9999)){
        throw invalid_argument("Argumento invalido.");
    }
}

void Data::setValor(string valor) {
    validar(valor);
    this->valor = valor;


// --------------------------------------------------------------------------
//Endereco:
//Matricula: 202021749
// Felipe Dantas Borges

void Endereco::validar(string valor){
    int len = valor.size();
    int ponto, espaco, valido = 1;
    string p1("."),p2(" ");

    for (int i = 0; valor[i] != '\0'; i++){
        string c;
        c = valor[i];
        if (bool(c == p1) == 1){
            ++ ponto;
            espaco = 0;  //zera a contagem de espacos
            if (ponto == 2){
                valido = 0;
            }
        }
        else if(bool(c == p2) == 1){
            ++ espaco ;
            ponto = 0;//zera a contagem de pontos
            if (espaco == 2){
                valido = 0;
            }
        }
        else{
            ponto = 0;
            espaco = 0;
        }
    }

    if((len <= 0 ) || (len >= 20)){
        throw invalid_argument("Argumento invalido.");
    }
    else if (valido == 0){
        throw invalid_argument("Argumento invalido.");
    }

void Endereco::setValor(string valor) {
    validar(valor);
    this->valor = valor;
}
// --------------------------------------------------------------------------
//Titulo:
//Matricula: 202021749
// Felipe Dantas Borges

void Titulo::validar(string valor){
    int len = valor.size();
    int ponto, espaco, valido = 1;
    string p1("."),p2(" ");

    for (int i = 0; valor[i] != '\0'; i++){
        string c;
        char c2;
        c = valor[i];
        c2 = valor[i];
        if ((isalpha(c2) == 0)){
            valido = 0;
        }
        else if (bool(c == p1) == 1){
            ++ ponto;
            espaco = 0;  //zera a contagem de espacos
            if (ponto == 2){
                valido = 0;
            }
        }
        else if(bool(c == p2) == 1){
            ++ espaco ;
            ponto = 0;//zera a contagem de pontos
            if (espaco == 2){
                valido = 0;
            }
        }
        else{
            ponto = 0;
            espaco = 0;
        }
    }

    if((len < 5 ) || (len > 20)){
        throw invalid_argument("Argumento invalido.");
    }
    else if (valido == 0){
        throw invalid_argument("Argumento invalido.");
    }
void Titulo::setValor(string valor) {
    validar(valor);
    this->valor = valor;
}
