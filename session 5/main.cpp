#include "vehicle.h"
#include "car.h"
#include <iostream>

int main(){
    car v1(20,5);
    v1.get_price();
    v1.get_type();
    v1.afficher();
}