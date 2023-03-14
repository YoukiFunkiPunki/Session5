#include <iostream>
#include "vehicle.h"
#ifndef UNTITLED_CAR_H
#define UNTITLED_CAR_H
using namespace std;

class car:public vehicle {
protected:
    int m_doors;
public:
    car(double,int);
    void afficher();
    double get_price();
    int get_type();
};

car::car(double a, int n):vehicle(a),m_doors(n) {}
double car::get_price(){return(m_price,m_doors);}
void car::afficher(){cout<<"Price : "<<m_price<<" euro for "<<m_doors<<" doors, type "<<get_type()<<endl;}
int car::get_type(){return 1;}

#endif //UNTITLED_CAR_H
