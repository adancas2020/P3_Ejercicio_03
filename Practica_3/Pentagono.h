#ifndef PENTAGONO_H
#define PENTAGONO_H
#include "Punto.h"
#include<math.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

class Pentagono
{
    private:
        Punto SuperiorMed;
        Punto SuperiorIzq;
        Punto SuperiorDer;
        Punto InferiorIzq;
        Punto InferiorDer;
        Punto Apotema;
    public:
        Pentagono()
        {
            cout<<"Se ha creado un Pentagono"<<endl;
        }
        void AsignarSupMed(float x,float y)
        {
            SuperiorMed.asignarX(x);
            SuperiorMed.asignarY(y);
        }
        void AsignarSupIzq(float x,float y)
        {
            SuperiorIzq.asignarX(x);
            SuperiorIzq.asignarY(y);
        }
        void AsignarSupDer(float x,float y)
        {
            SuperiorDer.asignarX(x);
            SuperiorDer.asignarY(y);
        }
        void AsignarInfIzq(float x,float y)
        {
            InferiorIzq.asignarX(x);
            InferiorIzq.asignarY(y);
        }
        void AsignarInfDer(float x,float y)
        {
            InferiorDer.asignarX(x);
            InferiorDer.asignarY(y);
        }
        void AsignarApotema(float x,float y)
        {
            Apotema.asignarX(x);
            Apotema.asignarY(y);
        }
        float Perimetro()
        {
            float lado=sqrt(abs(((InferiorDer.ObtenerX()-InferiorIzq.ObtenerX())*(InferiorDer.ObtenerX()-InferiorIzq.ObtenerX()))-((InferiorDer.ObtenerY()-InferiorIzq.ObtenerY())*(InferiorDer.ObtenerY()-InferiorIzq.ObtenerY()))));
            return (lado*5);
        }
        float Area()
        {
            float lado=sqrt(abs(((InferiorDer.ObtenerX()-InferiorIzq.ObtenerX())*(InferiorDer.ObtenerX()-InferiorIzq.ObtenerX()))-((InferiorDer.ObtenerY()-InferiorIzq.ObtenerY())*(InferiorDer.ObtenerY()-InferiorIzq.ObtenerY()))));
            float Operacion=abs((Apotema.ObtenerY()-SuperiorMed.ObtenerY())/2);
            return (Operacion*lado*5);
        }
        void Condicion()
        {
            float d1=sqrt(abs(((InferiorDer.ObtenerX()-SuperiorDer.ObtenerX())*(InferiorDer.ObtenerX()-SuperiorDer.ObtenerX()))-((InferiorDer.ObtenerY()-SuperiorDer.ObtenerY())*(InferiorDer.ObtenerY()-SuperiorDer.ObtenerY()))));
            float d2=sqrt(abs(((SuperiorDer.ObtenerX()-SuperiorMed.ObtenerX())*(SuperiorDer.ObtenerX()-SuperiorMed.ObtenerX()))-((SuperiorDer.ObtenerY()-SuperiorMed.ObtenerY())*(SuperiorDer.ObtenerY()-SuperiorMed.ObtenerY()))));
            float d3=sqrt(abs(((SuperiorMed.ObtenerX()-SuperiorIzq.ObtenerX())*(SuperiorMed.ObtenerX()-SuperiorIzq.ObtenerX()))-((SuperiorMed.ObtenerY()-SuperiorIzq.ObtenerY())*(SuperiorMed.ObtenerY()-SuperiorIzq.ObtenerY()))));
            float d4=sqrt(abs(((SuperiorIzq.ObtenerX()-InferiorIzq.ObtenerX())*(SuperiorIzq.ObtenerX()-InferiorIzq.ObtenerX()))-((SuperiorIzq.ObtenerY()-InferiorIzq.ObtenerY())*(SuperiorIzq.ObtenerY()-InferiorIzq.ObtenerY()))));
            float d5=sqrt(abs(((InferiorIzq.ObtenerX()-InferiorDer.ObtenerX())*(InferiorIzq.ObtenerX()-InferiorDer.ObtenerX()))-((InferiorIzq.ObtenerY()-InferiorDer.ObtenerY())*(InferiorIzq.ObtenerY()-InferiorDer.ObtenerY()))));
            if(d1+d2+d4!=d4+d5+d3)
            {
                cout<<"No es Pentagono Regular"<<endl;
            }
            else
            {
                cout<<"Si es un Pentagono Regular"<<endl;
            }
        }
};

#endif
