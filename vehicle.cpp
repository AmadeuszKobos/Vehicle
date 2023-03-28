// Program code for March 20th
#include <iostream>

using namespace std;

// Creating the Vehicle class
class Vehicle {
    private:
        double power;
        int rental_time;
        double length;
        bool available;
    public:
        void setParameters(char);

        double getPower();
        int getRental_time();
        double getLength();
        bool isAvailable();
};

void Vehicle::setParameters(char type) {
    if (type == 'A') {
        power = 75;
        rental_time = 0;
        length = 3.8;
        available = true;
    }
    else if (type == 'B') {
        power = 90;
        rental_time = 0;
        length = 4.1;
        available = true;
    }
    else if (type == 'C') {
        power = 110;
        rental_time = 0;
        length = 4.51;
        available = true;
    }
    else if (type == 'E') {
        power = 150;
        rental_time = 0;
        length = 4.8;
        available = true;
    }
    else {
        cout << "Invalid vehicle class type" << endl;
        power = 0;
        rental_time = 0;
        length = 0;
        available = false;
    }
}

double Vehicle::getPower() {
    return power;
}

int Vehicle::getRental_time() {
    return rental_time;
}

double Vehicle::getLength() {
    return length;
}

bool Vehicle::isAvailable() {
    return available;
}

int main() {
    Vehicle car[10];
    double number;
    int time, n = 2;
    char type; // Vehicle class type input

    for (int i = 0; i < n; i++) {
        cout << "Enter the class type: ";
        cin >> type;
        car[i].setParameters(type);
    }

    for (int i = 0; i < n; i++) {
        cout << "Power: " << car[i].getPower() << endl;
        cout << "Rental Time: " << car[i].getRental_time() << endl;
        cout << "Length: " << car[i].getLength() << endl;
        cout << "Available: " << car[i].isAvailable() << endl;
    }

    cout << "\nEND!" << endl;
    return 0;
}
