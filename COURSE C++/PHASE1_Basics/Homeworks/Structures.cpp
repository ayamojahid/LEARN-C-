#include <iostream>
#include <string>

using namespace std;

struct Product{
    string name ;
    int price;
    int quantity;
};

int main() {
    Product product1;
    product1.name = "Laptop";
    product1.price= 5000;
    product1.quantity=2;

    cout << "====== Product 1 : =====" << endl;
    cout  << "Name:  "   << product1.name << endl;
    cout  << "price:  "   << product1.price << endl;
    cout  << "quantity:  "   << product1.quantity << endl;
}