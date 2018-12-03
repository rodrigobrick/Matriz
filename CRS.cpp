#include "CRS.h"

CRS::CRS()
{

}

CRS::~CRS()
{
    //dtor
}

void CRS::guardarCRS()
{
    k = 0;
    int suma_fila = 0;
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
            suma_fila+=A[z][j];
        }
        if(suma_fila == 0){
            z++;
            longf++;
        }
        for(int j=0 ; j<filas ; j++){
            if(A[z][j] != 0){
                vector_d[k] = A[z][j];
                vector_c[k] = j+1;
                k++;
            }
        }
        vector_f[z+1]=k;
        suma_fila=0;
        z++;
	}
	longf=filas;
	for(int i=2;i<filas;i++){
        for(int j=2;j<filas;j++){
            if(vector_f[j-1] == vector_f[j])
                vector_f[j] = 0;
            if(vector_f[j-1] == 0){
                vector_f[j-1] = vector_f[j];
                vector_f[j] = 0;
            }
        }
    }
}
