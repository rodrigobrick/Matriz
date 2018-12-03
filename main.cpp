#include "CRS.h"
#include "CCS.h"
#include "Template.h"

int main();

void menu(int val1,int val2)
{
    CRS* C1;
    CCS* C2;
    Template* T1;
    system("CLS");
    int opt=0;
    char opt1;
    int vali=0;
    int valj=0;
    cout << "\n***************** MENU *****************\n\n1.- Metodo Compressed Row Storage (CRS).\n2.- Metodo Compressed Column Storage (CCS).\n3.- Retornar Valor i,j de una Matriz.\n4.- Sumar dos matrices de NxM.\n5.- Volver a Ingresar filas y columnas.\n6.- Salir\n\nIngrese Opcion: ";
	cin >> opt1;
	if(opt1 < 49 || opt1 > 54){
        cout << "\nOpcion Ingresada no Valida, ";
        system("PAUSE");
        menu(val1,val2);
    }
    else{
        opt = opt1 - 48;
        switch(opt)
        {
        case 1:
            C1=new(CRS);
            C1->Setfilas(val1);
            C1->Setcolumnas(val2);
            C1->guardarMatriz();
            C1->guardarCRS();
            C1->mostrar();
            cout << endl;
            delete C1;
            system("PAUSE");
            menu(val1,val2);
        case 2:
            C2=new(CCS);
            C2->Setfilas(val1);
            C2->Setcolumnas(val2);
            C2->guardarMatriz();
            C2->guardarCCS();
            C2->mostrar();
            delete C2;
            cout << endl;
            system("PAUSE");
            menu(val1,val2);
        case 3:
            T1=new(Template);
            T1->Setfilas(val1);
            T1->Setcolumnas(val2);
            T1->guardarMatriz();
            cout << "\nIngrese Posicion i: ";
            cin >> vali;
            if(vali > val1){
                cout << "\nEste valor tiene que ser menor a " << val1 << ". ";
                system("PAUSE");
                system("CLS");
                delete T1;
                menu(val1,val2);
            }
            cout << "\nIngrese Posicion j: ";
            cin >> valj;
            if(valj > val2){
                cout << "\nEste valor tiene que ser menor a " << val2 << ". ";
                system("PAUSE");
                system("CLS");
                delete T1;
                menu(val1,val2);
            }
            else{
                T1->mostrarsoloM();
                cout << "\nPosicion [" << vali << "," << valj << "] : " << T1->retornaij(vali,valj) << "\n\n";
                system("PAUSE");
                system("CLS");
                delete T1;
                menu(val1,val2);
            }
        case 4:
            T1=new(Template);
            T1->Setfilas(val1);
            T1->Setcolumnas(val2);
            T1->sumarM();
            T1->mostrarMsuma();
            cout << "\n";
            system("PAUSE");
            system("CLS");
            delete T1;
            menu(val1,val2);
        case 5:
            main();
        case 6:
            exit(0);
        }
    }
}

int main()
{
    int val1;
    int val2;
	cout << "\n***************** MENU *****************\n\nIngrese Numero de filas ( <= " << mLimit << " ): ";
	cin >> val1;
	cout << "\nIngrese Numero de columnas ( <= " << mLimit << " ): ";
    cin >> val2;
    if(val1 >= 0 && val1 <= mLimit && val2 >= 0 && val2 <= mLimit){
        menu(val1,val2);
	}
	else{
        cout << "\nEste valor tiene que ser menor a " << mLimit << ". ";
        system("PAUSE");
        system("CLS");
        main();
	}
    return 0;
}
