#include <iostream>
#include "Car.h"

int main() {
    Car car1("Toyota", "Camry", 2021, 25000.0);
    car1.display();

    Car car2;
    car2.input();
    car2.display();

    car1.setPrice(23500.50);
    std::cout << "New price for car 1: $" << car1.getPrice() << std::endl;

    return 0;
}
