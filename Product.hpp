#include <string>
#include <iostream>

using namespace std;

class Product {
private: 
    string name;
    double price;
    double cal;

public: 
    Product(string n, double p, double c) : name(n), price(p), cal(c) {}

    virtual void prepare() const = 0;

    void printInfo();

    string getName();
    double getPrice();
    double getCal();

    void setName();
    void setPrice();
    void setCal();

    virtual ~Product() {}
};