#include<iostream>
using  namespace  std;
//定义虚基类
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
//定义自行车类
class bicycle :virtual public vehicle {
private:
    int hight;
};
//定义汽车类
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