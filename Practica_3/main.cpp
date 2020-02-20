#include <iostream>
#include "Pentagono.h"
#include "Punto.h"
using namespace std;

int main()
{
    Pentagono miPentagono;
    miPentagono.AsignarApotema(1.5,2.31);
    miPentagono.AsignarInfDer(3,0);
    miPentagono.AsignarSupDer(3.93,2.85);
    miPentagono.AsignarSupMed(1.5,4.62);
    miPentagono.AsignarSupIzq(-0.93,2.85);
    miPentagono.AsignarInfIzq(0,0);
    cout<<"El perimetro del Pentagono es: "<< miPentagono.Perimetro() <<endl;
    cout<<"El area del Pentagono es: "<< miPentagono.Area() <<endl;
    cout<<"\n\n"<<endl;
    miPentagono.Condicion();
    return 0;
}
