#ifndef CAR_H
#define CAR_H

#include <iostream>

class Car {
private:
    char brand[50];
    char model[50];
    int year;
    double price;

public:
    Car();
    Car(const char* b, const char* m, int y, double p);
    ~Car();

    const char* getBrand() const;
    const char* getModel() const;
    int getYear() const;
    double getPrice() const;

    void setBrand(const char* b);
    void setModel(const char* m);
    void setYear(int y);
    void setPrice(double p);

    void input();
    void display() const;
};

#endif
