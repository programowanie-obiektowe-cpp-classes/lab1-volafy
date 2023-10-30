class Wektor2D{

    // Tutaj napisz implementacje klasy Wektor2D
    private:
        double X;
        double Y;

        

        Wektor2D(double x, double y){
            X = x;
            Y = y;
        }

    public:

        Wektor2D(): X{0},Y{0}{}

        void setX(double x){X=x;}
        void setY(double y){Y=y;}
        double getX(){return X;}
        double getY(){return Y;}

        

};
Wektor2D operator+(Wektor2D v1, Wektor2D v2){

    Wektor2D newvector;
    newvector.setX(v1.getX()+v2.getX());
    newvector.setY(v1.getY()+v2.getY());

    return (newvector);
}

double operator*(Wektor2D v1, Wektor2D v2){

    double result = v1.getX()*v2.getX()+v1.getY()*v2.getY();
    

    return (result);
}