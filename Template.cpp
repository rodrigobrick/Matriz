#include "Template.h"

Template::Template()
{
    filas = 0;
    columnas = 0;
    k = 0;
    longf = 0;
}

Template::~Template()
{
    //dtor
}

void Template::guardarMatriz()
{
    srand(time(NULL));
    for(int i=0 ; i<filas ; i++){
		for(int j=0 ; j<columnas ; j++){
		    if((rand()%10)+1 <= 8)
		    	A[i][j] = 0;
		    else
		    	A[i][j]=(rand()%9)+1;
        }
    }
}

void Template::mostrar()
{
    cout << "\n\nMatriz A:\n\n";
    for(int i=0;i<columnas;i++){
        for(int j=0;j<filas;j++)
            cout << "  " << A[i][j];
        cout << "\n";
    }

    cout << "\n\nVector d (Datos distintos de cero) :\n\n";
    for(int i=0;i<k;i++)
        cout << " " << vector_d[i];

    cout << "\n\nVector c (Indices de los Datos distintos de cero) :\n\n";
    for(int i=0;i<k;i++)
        cout << " " << vector_c[i];

    cout << "\n\nVector f (Puntero de Fila) :\n\n";
    for(int i=0;i<filas;i++){
        cout << " " << vector_f[i];
        if(vector_f[i+1] == 0){
            break;
        }
    }
    cout << endl;
}

void Template::sumarM()
{
    for(int i=0 ; i<filas ; i++){
		for(int j=0 ; j<columnas ; j++){
		    mA[i][j] = 0;
		    mB[i][j] = 0;
		    mC[i][j] = 0;
        }
    }
    srand(time(NULL));
    for(int i=0 ; i<filas ; i++){
		for(int j=0 ; j<columnas ; j++){
		    if((rand()%10)+1 <= 5)
		    	mA[i][j] = 0;
		    else
		    	mA[i][j]=(rand()%9)+1;
        }
    }
    for(int i=0 ; i<filas ; i++){
		for(int j=0 ; j<columnas ; j++){
		    if((rand()%10)+1 <= 5)
		    	mB[i][j] = 0;
		    else
		    	mB[i][j]=(rand()%9)+1;
        }
    }
    for(int i=0 ; i<filas ; i++){
		for(int j=0 ; j<columnas ; j++){
		    mC[i][j] = mA[i][j]+mB[i][j];
        }
    }
}

void Template::mostrarMsuma()
{
    cout << "\n\nMatriz A:\n\n";
    for(int i=0;i<columnas;i++){
        for(int j=0;j<filas;j++)
            cout << "  " << mA[i][j];
        cout << "\n";
    }
    cout << "\n\nMatriz B:\n\n";
    for(int i=0;i<columnas;i++){
        for(int j=0;j<filas;j++)
            cout << "  " << mB[i][j];
        cout << "\n";
    }
    cout << "\n\nMatriz A+B:\n\n";
    for(int i=0;i<columnas;i++){
        for(int j=0;j<filas;j++){
            if(mC[i][j] > 9){
                cout << "  " << mC[i][j];
            }
            else{
                cout << "   " << mC[i][j];
            }
        }
        cout << "\n";
    }
}

void Template::mostrarsoloM()
{
    cout << "\n\nMatriz A:\n\n";
    for(int i=0;i<columnas;i++){
        for(int j=0;j<filas;j++)
            cout << "  " << A[i][j];
        cout << "\n";
    }
}
