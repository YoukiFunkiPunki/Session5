#include <iostream>
#include <vector>
#include "vehicle.h"
#include "car.h"
#include "bike.h"
#ifndef UNTITLED_GARAGE_H
#define UNTITLED_GARAGE_H
using namespace std;

class Garage{
protected:
    vector<vehicle *> m_vehicle;
public:
    Garage(){};
    void add();
    void supp();
    void afficher();
    virtual ~Garage(){};
};


void Garage::add() {
    int choice,price,doors,speed;
    cout<<"What vehicle do you want to select ?"<<endl;
    cout<<"1 for car, 2 for bike"<<endl;
    cin>>choice;
    if (choice==1){
        cout<<"What is the price of your car ?"<<endl;
        cin>>price;
        cout<<"How many doors does your car have ?"<<endl;
        cin>>doors;
        ;
        m_vehicle.push_back(new car(price,doors));
    }
    else if (choice==2){
        cout<<"What is the price of your bike ?"<<endl;
        cin>>price;
        cout<<"How fast can your bike go ? (km/h)"<<endl;
        cin>>speed;
        ;
        m_vehicle.push_back(new bike(price,speed));
    }
    else cout<<"Vehicle type can't be stored in your garage"<<endl;
};

void Garage::supp(){
    int index;
    cout<<"What vehicle do you want to delete from your garage ?"<<endl;
    cin>>index;
    m_vehicle.erase(m_vehicle.begin() + index);
}

void Garage::afficher(){
    int countc=0,countb=0,pricec=0,priceb=0;
    for (int i = 0; i < size(m_vehicle); i++) {
        m_vehicle[i]->afficher();
        if(m_vehicle[i]->get_type()==1){
            countc+=1;
            pricec+=m_vehicle[i]->get_price();
        }
        else{
            countb+=1;
            priceb+=m_vehicle[i]->get_price();
        }
    }
    cout<<"You have "<<countc<<" cars and "<<countb<<" bikes in your garage"<<endl;
    cout<<"The total cost of your cars is "<<pricec<<" euros and your bikes cost "<<priceb<<" euros"<<endl;
    cout<<"Your garage costs "<<priceb+pricec<<" for "<<countb+countc<<" vehicles"<<endl;
}

#endif //UNTITLED_GARAGE_H
