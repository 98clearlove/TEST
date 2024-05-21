#include <iostream>
using namespace std;

// ���� Vehicle
class Vehicle {
public:
    virtual void run() {
        cout << "vehicle run!" << endl;
    }
    virtual void stop() {
        cout << "vehicle stop!" << endl;
    }
};

// ������ Bicycle
class Bicycle : virtual public Vehicle {
public:
    void run() {
        cout << "bicycle run!" << endl;
    }
    void stop() {
        cout << "bicycle stop!" << endl;
    }
};

// ������ Motorcar
class Motorcar : virtual public Vehicle {
public:
    void run() {
        cout << "motorcar run!" << endl;
    }
    void stop() {
        cout << "motorcar stop!" << endl;
    }
};

// ������ Motorbicycle���� Bicycle �� Motorcar ����
class Motorbicycle : public Bicycle, public Motorcar {
public:
    void run(){
        cout << "motorbicycle run!" << endl;
    }
    void stop() {
        cout << "motorbicycle stop!" << endl;
    }
};

int main43() {
    Vehicle vehicle;
    Bicycle bicycle;
    Motorcar motorcar;
    Motorbicycle motorbicycle;
    Vehicle* p = &vehicle;
    vehicle.run();
    bicycle.run();
    motorcar.run();
    motorbicycle.run();
    p->run();
    p = &bicycle;
    p->run();
    p = &motorcar;
    p->run();
    p = &motorbicycle;
    p->run();
    return 0;
}
