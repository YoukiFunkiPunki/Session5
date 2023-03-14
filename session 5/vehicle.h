#include <iostream>
#ifndef UNTITLED_VEHICLE_H
#define UNTITLED_VEHICLE_H
using namespace std;

class vehicle{
protected:
    double m_price;
public:
    vehicle(double);
    void afficher();
    double get_price();
};

vehicle::vehicle(double a):m_price(a){}
double vehicle::get_price(){return(m_price);}
void vehicle::afficher(){cout<<"Price : "<<m_price<<" euro"<<endl;}

#endif //UNTITLED_VEHICLE_H
