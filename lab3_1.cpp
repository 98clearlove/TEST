#include<iostream>
using  namespace  std;
class animal {
public:
    //成员函数 设置年龄
    void setAge(int n) {
        age = n;
    }
    //成员函数返回年龄
    int getAge() {
        return age;
    }
private:
    int age; //年龄
};
class dog :public animal {
public:
    //成员函数 设置年龄
    void SetAge(int n) {
        setAge(n);
    }
    //成员函数 返回年龄
    int GetAge() {
        return getAge();
    }
};
int  main31()
{
    dog  d;
    d.SetAge(1);
    cout << d.GetAge() << endl;
    return  0;
}