#include<iostream>
using  namespace  std;
//���������
class vehicle {
public:
    void run() {
        cout << "vehicle run"<<endl;
    }
    void stop() {
        cout << "vehicle stop" << endl;
    }
private:
    int Maxspeed;
    int Weight;
};
//�������г���
class bicycle :virtual public vehicle {
private:
    int hight;
};
//����������
class motorcar :virtual public vehicle {
private:
    int SeatNun;
};
class motorbicycle :public bicycle, motorcar {

};
int  main33()
{
    motorbicycle  m;
    m.run();
    m.stop();
    return  0;
}