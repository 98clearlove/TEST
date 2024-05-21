#include <iostream>
#include <string>
using namespace std;

//创建类
class Employee {
private:
    string name;
    string address;
    string city;
    string postalcode;

public:
    //不带参数的构造函数
    Employee() {}
    //带参数的构造函数
    Employee(string n, string a, string c, string p) : name(n), address(a), city(c), postalcode(p) {}
    //展示函数
    void display() const {
        cout << "name:" << name << endl;
        cout << "address:" << address << endl;
        cout << "city:" << city << endl;
        cout << "postalcode:" << postalcode << endl;
    }
    //修改函数
    void change_name(const string& newName) {
        name = newName;
    }
};
int  main26()
{
    string  n, a, c, p;
    int  i, j;
    Employee  emp[5];
    for (i = 0; i < 5; i++)
    {
        cin >> n;
        cin >> a;
        cin >> c;
        cin >> p;
        emp[i] = Employee(n, a, c, p);
    }
    for (i = 0; i < 5; i++)
    {
        cout << "Employee" << i + 1 << endl;
        emp[i].display();
    }
    return 0;
}