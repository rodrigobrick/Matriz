#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <iostream>
#include <stdlib.h>
#include <ctime>
#define mLimit 9000

using namespace std;

class Template
{
    public:
        Template();
        ~Template();

        int Getfilas() { return filas; }
        void Setfilas(int val) { filas = val; }
        int Getcolumnas() { return columnas; }
        void Setcolumnas(int val) { columnas = val; }
        void guardarMatriz();
        void mostrar();
        void sumarM();
        void mostrarMsuma();
        float retornaij(int i,int j) { return A[i][j]; }
        void mostrarsoloM();

    protected:
        int filas;
        int columnas;
        int k;
        int longf;
        int A[mLimit][mLimit];
        int mA[mLimit][mLimit];
        int mB[mLimit][mLimit];
        int mC[mLimit][mLimit];
        int vector_f[mLimit];
        int vector_c[mLimit*mLimit];
        float vector_d[mLimit*mLimit];
};

#endif // TEMPLATE_H
