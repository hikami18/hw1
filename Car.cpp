#include "Car.h"

Car::Car() {
    brand[0] = '\0';
    model[0] = '\0';
    year = 0;
    price = 0.0;
}

Car::Car(const char* b, const char* m, int y, double p) {
    setBrand(b);
    setModel(m);
    year = y;
    price = p;
}

Car::~Car() {}

const char* Car::getBrand() const { return brand; }
const char* Car::getModel() const { return model; }
int Car::getYear() const { return year; }
double Car::getPrice() const { return price; }

void Car::setBrand(const char* b) {
    int i = 0;
    while (b[i] != '\0' && i < 49) {
        brand[i] = b[i];
        i++;
    }
    brand[i] = '\0';
}

void Car::setModel(const char* m) {
    int i = 0;
    while (m[i] != '\0' && i < 49) {
        model[i] = m[i];
        i++;
    }
    model[i] = '\0';
}

void Car::setYear(int y) { year = y; }
void Car::setPrice(double p) { price = p; }

void Car::input() {
    std::cout << "Enter brand: ";
    std::cin >> brand;
    std::cout << "Enter model: ";
    std::cin >> model;
    std::cout << "Enter year: ";
    std::cin >> year;
    std::cout << "Enter price ($): ";
    std::cin >> price;
}

void Car::display() const {
    std::cout << "\n--- Car Info ---" << std::endl;
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "Price: $" << price << std::endl;
    std::cout << "----------------" << std::endl;
}
