#include<iostream>
using  namespace  std;
//定义基类
class BaseClass {
public:
    //默认构造函数
    BaseClass() {
        cout << "Construct BaseClass" << endl;
    }
    //带参数的构造函数
    BaseClass(int l):number(l){
        cout << "Construct BaseClass" << endl;
    }
    //析构函数
    ~BaseClass(){
        cout << "Destruct BaseClass" << endl;
    }
private:
    int number; //数字
};

//定义派生类
class DerivedClass :public BaseClass {
public:
    //带参数的构造函数
    DerivedClass(int n,int m): BaseClass(n),baseclass(m){
        cout << "Construct DerivedClass" << endl;
    }
    //析构函数
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