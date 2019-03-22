//
// Created by ASUS on 3/14/2019.
//

#include "Nodo.h"


Nodo::Nodo() : mes(-1), siguiente(0)
{
}

Nodo::Nodo(int d, int m) : mes{m}, dia(d), siguiente(0)
{
}

/*
void Nodo::setValor(int v) {
    this->valor=v;
}

void Nodo::setSiguiente(Nodo *sig) {
    this->siguiente=sig;
}

int Nodo::getValor() {
    return this->valor;
}

Nodo * Nodo::getSiguiente() {
    return this->siguiente;
}*/

bool ListaEnlazadaSimple::esVacia() {
    return primero==0;
}

void ListaEnlazadaSimple::agregar(int d ,int m) {
        Nodo *nuevo=new Nodo;
    //    nuevo->setValor(valor);

        if(esVacia()){
            primero=nuevo;
            ultimo=nuevo;
        }else{
//            ultimo->setSiguiente(nuevo);
            ultimo=nuevo;
        }
}