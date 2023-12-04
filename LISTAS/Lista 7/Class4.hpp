#include <iostream>

using namespace std;


class Pessoa
{
private:
    string nome;

public:
    Conta conta;

    Pessoa(string nome, string CPF);
    string getNome();
};


class Fisica : public Pessoa
{
    string CPF;

public:
    Fisica(string CPF);
    string getCPF();
};



class Juridica : public Pessoa
{
    string CNPJ;

public:
    Juridica(string CPF);
};







class Conta
{
    int numero;
    float saldo;

public:
    string pix;

    Conta(int numero);
    float saldo();
    void sacar(float valor);
    void depositar(float valor);
    int getConta();
};


class Corrente : public Conta
{
   
};

class Poupanca : public Conta
{
    int aniversario;
    float valor;

public:
    int getAniversario();
    int aplicaJuros();
};


class Especial : public Conta
{
public:
    float limite;
    Especial(float limite);
};