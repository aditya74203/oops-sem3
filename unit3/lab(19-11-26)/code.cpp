// create a base class food with a virtual calculate price now drive pizza burger and sandwhich class and calculate there orice based on there quality.
#include <iostream>
using namespace std;

class Food {
public:
    virtual void calculatePrice() {
        cout << "Calculating food price..." << endl;
    }
};

class Pizza : public Food {
    int quality;

public:
    Pizza(int q) {
        quality = q;
    }

    void calculatePrice() override {
        int price = 100 * quality;
        cout << "Pizza Price: Rs. " << price << endl;
    }
};

class Burger : public Food {
    int quality;

public:
    Burger(int q) {
        quality = q;
    }

    void calculatePrice() override {
        int price = 50 * quality;
        cout << "Burger Price: Rs. " << price << endl;
    }
};

class Sandwich : public Food {
    int quality;

public:
    Sandwich(int q) {
        quality = q;
    }

    void calculatePrice() override {
        int price = 40 * quality;
        cout << "Sandwich Price: Rs. " << price << endl;
    }
};

int main() {
    Pizza p(3);
    Burger b(2);
    Sandwich s(4);

    Food* ptr;

    ptr = &p;
    ptr->calculatePrice();

    ptr = &b;
    ptr->calculatePrice();

    ptr = &s;
    ptr->calculatePrice();

    return 0;
}
