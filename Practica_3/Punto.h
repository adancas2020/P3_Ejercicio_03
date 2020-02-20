#ifndef PUNTO_H
#define PUNTO_H
class Punto
{
    public:
        Punto(float x_coord,float y_coord);
        Punto();
        void asignarX(float x_coord);
        void asignarY(float y_coord);
        float ObtenerX() const;
        float ObtenerY() const;
        void PrintData();
    private:
        float x;
        float y;
};

#endif
