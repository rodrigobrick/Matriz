#include "CCS.h"

CCS::CCS()
{
    //ctor
}

CCS::~CCS()
{
    //dtor
}

void CCS::guardarCCS()
{
    k = 0;
    int suma_columna = 0;
    int z=0;
    for(int i=0;i<columnas*filas;i++){
        vector_d[i] = 0;
        vector_c[i] = 0;
    }
    for(int i=0;i<columnas;i++){
        vector_f[i] = 0;
    }
    vector_f[0] = 0;
    while(z < columnas){
        for(int j=0 ; j<filas ; j++){
            suma_columna+=A[j][z];
        }
        if(suma_columna == 0){
            z++;
            longf++;
        }
        for(int j=0 ; j<filas ; j++){
            if(A[j][z] != 0){
                vector_d[k] = A[j][z];
                vector_c[k] = j+1;
                k++;
            }
        }
        vector_f[z+1]=k;
        suma_columna=0;
        z++;
	}
	for(int i=2;i<filas;i++){
	    if(vector_f[i-1] == vector_f[i])
            vector_f[i] = 0;
        if(vector_f[i-1] == 0){
            vector_f[i-1] = vector_f[i];
            vector_f[i] = 0;
        }
    }
}
