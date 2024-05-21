#include <iostream>
#include <string>
using namespace std;

//������
class Employee {
private:
    string name;
    string address;
    string city;
    string postalcode;

public:
    //�������Ĺ��캯��
    Employee(string n, string a, string c, string p) : name(n), address(a), city(c), postalcode(p) {}
    //չʾ����
    void display() const {
        cout << "name:" << name << endl;
        cout << "address:" << address << endl;
        cout << "city:" << city << endl;
        cout << "postalcode:" << postalcode << endl;
    }
    //�޸ĺ���
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