//
// Created by Admin on 20.03.2020.
//

#ifndef LESSON26_CAR_H
#define LESSON26_CAR_H

#include <string>
#include "cargo.h"

using namespace std;

class Car {
private:
    string name;
    double cargo;
public:
    Car(string name, double cargo){
        this->name = name;
        if(cargo < 0) throw -1; else this->cargo = cargo;
    }

    Car(){}

    void SetName(string name){
        this->name = name;
    }

    void SetCargo(double cargo){
        if(cargo < 0) throw -1; else this->cargo = cargo;
    }

    string GetName(){
        return name;
    }

    double GetCargo(){
        return cargo;
    }

    bool isPut(Cargo cargo){
        if(this->cargo >= cargo.GetWeight()) return true;
        else return false;
    }
};


#endif //LESSON26_CAR_H
