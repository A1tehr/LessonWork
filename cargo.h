//
// Created by Admin on 20.03.2020.
//

#ifndef LESSON26_CARGO_H
#define LESSON26_CARGO_H

#include <string>
using namespace std;

class Cargo{
private:
    string name;
    double weight;
public:
    Cargo(string name, double weight){
        this->name = name;
        if(weight < 0) throw -2;
        else this->weight = weight;
    }
    Cargo(){}

    void SetName(string name){
        this->name = name;
    }
    void SetWeight(double weight){
        if(weight < 0) throw -2;
        else this->weight = weight;
    }

    string GetName(){
        return name;
    }

    double GetWeight(){
        return weight;
    }



};


#endif //LESSON26_CARGO_H
