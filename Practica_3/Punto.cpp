
#include "Punto.h"
#include<iostream>
using namespace std;

Punto::Punto(){}
Punto::Punto(float x_coord,float y_coord)
{
    x=x_coord;
    y=y_coord;
}
void Punto::asignarX(float x_coord)
{
    x=x_coord;
}
void Punto::asignarY(float y_coord)
{
    y=y_coord;
}
float Punto::ObtenerX() const
{
    return x;
}
float Punto::ObtenerY() const
{
    return y;
}
void Punto::PrintData()
{
    cout<<"El punto es: ("<<x<<","<<y<<")"<<endl;
}
