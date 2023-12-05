#include <iostream>
#include <iomanip>
#include "Class1.hpp"
#include "Class2.hpp"
using namespace std;

class Dias : Hora, Data
{

    Dias(void)
    { // Q3.1
        ano = 0001;
        mes = 01;
        dia = 01;

        hora = 00;
        minuto = 00;
        segundo = 00;
    }

    Dias(Hora a, Data b)
    { // Q3.2

        this->hora = a.getHora();
        this->minuto = a.getMinuto();
        this->segundo = a.getSegundo();

        this->ano = b.getAno();
        this->mes = b.getMes();
        this->dia = b.getDia();
    }

    Dias diferencaHora_Data(Hora horas, Data datas)
    { // Q3.3
        Dias result;

        result.hora = this->hora - horas.getHora();
        result.minuto = this->minuto - horas.getMinuto();
        result.segundo = this->segundo - horas.getSegundo();

        result.ano = this->ano - datas.getAno();
        result.mes = this->mes - datas.getMes();
        result.dia = this->dia - datas.getDia();

        return result;
    }

    Dias operator-(Data a)
    { // Q3.4
        Dias result;

        result.ano = this->ano - a.getAno();
        result.mes = this->mes - a.getMes();
        result.dia = this->dia - a.getDia();

        return result;
    }

    Dias operator-(Hora b)
    { // Q3.4
        Dias result;

        result.hora = this->hora - b.getHora();
        result.minuto = this->minuto - b.getMinuto();
        result.segundo = this->segundo - b.getSegundo();

        return result;
    }

      friend ostream& operator<<(ostream& os, const Dias& dataHorario) { //Q3.5
        os << setfill('0') << setw(4) << dataHorario.getAno() << "/"
           << setw(2) << dataHorario.getMes() << "/" << setw(2) << dataHorario.getDia() << "-"
           << setw(2) << dataHorario.getHora() << ":" << setw(2) << dataHorario.getMinuto() << ":"
           << setw(2) << dataHorario.getSegundo();
        return os;
    }
};
