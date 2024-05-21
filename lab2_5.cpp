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
int  main25()
{
    string  n, a, c, p;
    cin >> n;
    cin >> a;
    cin >> c;
    cin >> p;
    Employee  emp(n, a, c, p);
    emp.display();
    cin >> n;
    emp.change_name(n);
    emp.display();
    return 0;
}