//
// Created by ASUS on 3/14/2019.
//

#ifndef ARBOLBPROYECTO_NODO_H
#define ARBOLBPROYECTO_NODO_H


struct arbol{
    int mes;
    int anio;
    //Nodo *sig;
};

class Nodo {
public:
    Nodo();
    Nodo(int,int);
    int mes;
    int dia;
    int anio;
    Nodo * siguiente;
    void setValor(int);
    int getValor();
    void setSiguiente(Nodo *);
    Nodo * getSiguiente();
};


class ListaEnlazadaSimple {
private:
    Nodo *primero;
    Nodo *ultimo;
public:
    void agregar(int,int);
    bool esVacia();
};


#endif //ARBOLBPROYECTO_NODO_H


