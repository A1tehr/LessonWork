#include <iostream>
#include <string>
#include "car.h"

using namespace std;
void ShowError(string msg);

int main() {
    try {
        Car car("gaz", -2);
        cout << car.GetName() << endl;
        cout << car.GetCargo() << endl;
    } catch (int i) {
        if (i == -1) ShowError("Cargo is negative");
    }
    Car automobile;
    try {
        automobile.SetName("vaz");
        automobile.SetCargo(-5);
    } catch (int e){
        if(e == -1){
            ShowError("Cargo is negative");
            automobile.SetCargo(300);
        }
    }
    cout << automobile.GetName() << endl;
    cout << automobile.GetCargo() << endl;

    Cargo cargo1;
    try {
        cargo1.SetName("Potato");
        cargo1.SetWeight(-50);
        if(automobile.isPut(cargo1)) cout << "\nThe cargo can be placed.";
        else cout << "\nThe cargo can't be placed.";
    } catch (int e){
        if(e == -2){
            ShowError("Weight is negative.");
        }
    }

}
void ShowError(string msg){
    cout << "! E R R O R !" << endl << msg << endl;
}