#include "Product.hpp"

void printInfo(){
    cout << "Name: " << name << endl;
    cout << "Price: " << price << endl;
    cout << "Cal: " << cal << endl;
}

string Product::getName() {
    return name;
};
double Product::getPrice() {
    return price;
}:
double Product::getCal() {
    return cal;
};

void Product::setName(string n_name) {
    name = n_name;
}

void Product::setPrice(double p_price) {
    price = p_price;
}

void Product::setCal(double c_cal) {
    cal = c_cal;
}