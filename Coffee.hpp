#include "Product.hpp"

class Coffee : public Product{
public: 
    Coffee() : Product("Coffee", 90, 12){}
    void prepare() const override {
        cout << "Coffee is brewing"<< endl;
    }
};