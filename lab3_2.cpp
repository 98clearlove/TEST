#include<iostream>
using  namespace  std;
//�������
class BaseClass {
public:
    //Ĭ�Ϲ��캯��
    BaseClass() {
        cout << "Construct BaseClass" << endl;
    }
    //�������Ĺ��캯��
    BaseClass(int l):number(l){
        cout << "Construct BaseClass" << endl;
    }
    //��������
    ~BaseClass(){
        cout << "Destruct BaseClass" << endl;
    }
private:
    int number; //����
};

//����������
class DerivedClass :public BaseClass {
public:
    //�������Ĺ��캯��
    DerivedClass(int n,int m): BaseClass(n),baseclass(m){
        cout << "Construct DerivedClass" << endl;
    }
    //��������
    ~DerivedClass() {
        cout << "Destruct DerivedClass" << endl;
    }
private:
    BaseClass baseclass;
};
int  main32()
{
    DerivedClass  obj(1, 2);
    return  0;
}