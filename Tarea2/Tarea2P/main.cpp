#include <iostream>
using namespace std;
#include <iostream>}

using namespace std;
int main (){
cout << " * Seleccione una Opcion ";
cout <<  " 1. Programacion I";
 cout << " 2. Derecho Informatico ";
 cout << " 3. Calculo I ";
 cout << " 4. Proceso Administrativo";
 cout << " 5. Fisica I ";
 int OP = 0;
 cin >> OP;
    switch(OP)
{ case 1:
    cout << " Programacion I";
    int nota;
    cout << " Ingrese la nota obtenida: "; cin >> nota;
    if ( nota <= 60){
        cout << " nota obtenida:  "<<nota<<"; Necesita mejorar  "<<endl;
    }
    else
    if(nota ==61){
        cout<< " nota obtenida:  "<<nota<<"; Bueno "<<endl;
    }
        else
            if (nota >=80){
                cout<< " nota obtenida: "<<nota<<"; Excelente  "<<endl;
            }
    break;
    case 2:
     cout << " Derecho Informatico ";
    int nota2;
    cout << " Ingrese la nota obtenida: "; cin >> nota2;
    if ( nota2 <= 60){
        cout << " nota obtenida:  "<<nota2<<"; Necesita mejorar "<<endl;
    }
    else
    if(nota2 ==61){
        cout<< " nota obtenida:  "<<nota2<<"; Bueno "<<endl;
    }
        else
            if (nota2 >=80){
                cout<< " nota obtenida: "<<nota2<<"; Excelente  "<<endl;
            }
    break;
    case 3:
    cout << " Calculo I ";
      int nota3;
    cout << " Ingrese la nota obtenida: "; cin >> nota3;
    if ( nota3 <= 60){
        cout << " nota obtenida:  "<<nota3<<"; Necesita mejorar  "<<endl;
    }
    else
    if(nota3 ==61){
        cout<< " nota obtenida:  "<<nota3<<"; Bueno "<<endl;
    }
        else
            if (nota3 >=80){
                cout<< " nota obtenida: "<<nota3<<"; Excelente "<<endl;
            }
    break;
    case 4:
    cout << " Proceso Administrativo";
      int nota4;
    cout << " Ingrese la nota obtenida: "; cin >> nota4;
    if ( nota4 <= 60){
        cout << " nota obtenida:  "<<nota4<<"; Necesita mejorar "<<endl;
    }
    else
    if(nota4 ==61){
        cout<< " nota obtenida:  "<<nota4<<"; Bueno "<<endl;
    }
        else
            if (nota4 >=80){
                cout<< " nota obtenida: "<<nota4<<"; Excelente  "<<endl;
            }
    break;
    case 5:
    cout << " Fisica I ";
      int nota5;
    cout << " Ingrese la nota obtenida: "; cin >> nota5;
    if ( nota5 <= 60){
        cout << " nota obtenida:  "<<nota5<<"; Necesita mejorar  "<<endl;
    }
    else
    if(nota5 ==61){
        cout<< " nota obtenida:  "<<nota5<<"; Bueno "<<endl;
    }
        else
            if (nota5 >=80){
                cout<< " nota obtenida: "<<nota5<<"; Excelente  "<<endl;
            }
    break;
    default:
    cout << "Usted ha ingresado una opci�n incorrecta";
    }
    return 0;
    }
