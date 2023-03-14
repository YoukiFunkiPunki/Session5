#include <iostream>
#include "vehicle.h"
#ifndef UNTITLED_BIKE_H
#define UNTITLED_BIKE_H
using namespace std;

class bike:public vehicle {
protected:
    double m_speed;
public:
    bike(double,double);
    virtual void afficher();
    double get_price();
    int get_type();
};

bike::bike(double a, double b):vehicle(a){m_speed=b;}
double bike::get_price(){return(m_price,m_speed);}
void bike::afficher(){cout<<"Price : "<<m_price<<" euro for "<<m_speed<<" km/h max speed, type "<<get_type()<<endl;}
int bike::get_type(){return 2;}



#endif //UNTITLED_BIKE_H
