#include<iostream>
using  namespace  std;
class animal {
public:
    //��Ա���� ��������
    void setAge(int n) {
        age = n;
    }
    //��Ա������������
    int getAge() {
        return age;
    }
private:
    int age; //����
};
class dog :public animal {
public:
    //��Ա���� ��������
    void SetAge(int n) {
        setAge(n);
    }
    //��Ա���� ��������
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