#include <iostream>
#include "arbolB.h"

using namespace std;

int main(){
        int val, opt, max;
        MM:
        cout<<"LLaves por paginas: ";
        cin>>max;
        if(max<=2) {
            cout << "Valor Invalido...\n";
            goto MM;
        }
        BTree t(max);

        while (true) {
            cout<<" * * *  A R B O L   B  * * * "<<endl;
            cout<<"[1] Insertar\n";
            cout<<"[2] Buscar\n";
            cout<<"[3] Impresion (Inorden)\n";
            cout<<"[4] Salir\n Opcion: ";
            cin >> opt;
            cout << endl;
            switch (opt) {
                case 1:
                    cout<<"Cuantos registro desea insertar:";
                    cin >> val;
                    t.insert(val);
                    break;
                case 2:
                    int mes , anio;
                    cout<<"Dia:";
                    cin >> val;
                    cout<<"Mes: ";
                    cin>>mes;
                    cout<<"Anio: ";
                    cin>>anio;
                    (t.search(val, mes ,anio) != NULL)? cout << "\nExiste" : cout << "\nNo Existe";
                    cout << endl;
                    break;
                case 3:
                    t.traverse();
                    cout << endl;
                    break;
                case 4:
                    exit(0);
            }
            cout << endl;
        }
    }
