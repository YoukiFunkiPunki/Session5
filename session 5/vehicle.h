#include <iostream>
#ifndef UNTITLED_VEHICLE_H
#define UNTITLED_VEHICLE_H
using namespace std;

class vehicle{
protected:
    double m_price;
public:
    vehicle(double);
    virtual void afficher()=0;
    virtual double get_price()=0;
    virtual int get_type()=0;
    virtual ~vehicle(){};
};

vehicle::vehicle(double a):m_price(a){}
double vehicle::get_price(){return(m_price);}
void vehicle::afficher(){cout<<"Price : "<<m_price<<" euro"<<endl;}

#endif //UNTITLED_VEHICLE_H
