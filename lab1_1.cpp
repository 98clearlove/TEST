/*#include<iostream>
using namespace std;
// 定义一个枚举类型表示 CPU 等级
enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };
// 声明 CPU 类
class CPU {
public:
    // 带参数的构造函数
    CPU(enum CPU_Rank rank, int frequency, float voltage);
    // 默认构造函数
    CPU();
    // 析构函数
    ~CPU();
    // 成员函数：运行 CPU
    void Run();
    // 成员函数：停止 CPU
    void Stop();
private:
    enum CPU_Rank rank; // CPU 等级（例如 P1、P2 等）
    int frequency;      // CPU 频率（以 MHz 为单位）
    float voltage;      // CPU 电压（以伏特为单位）
};
// 构造函数实现
CPU::CPU(enum CPU_Rank rank, int frequency, float voltage) {
    // 初始化成员变量
    this->rank = rank;
    this->frequency = frequency;
    this->voltage = voltage;

    cout << "Construct CPU" << endl;
}
// 默认构造函数实现
CPU::CPU() {
    cout << "Construct CPU" << endl;
}
// 析构函数实现
CPU::~CPU() {
    cout << "Destruct CPU" << endl;
}
// 成员函数：运行 CPU
void CPU::Run() {
    cout << "CPU run" << endl;
}
// 成员函数：停止 CPU
void CPU::Stop() {
    cout << "CPU stop" << endl;
}
int main11(){
    CPU a(P6, 300, 2.8);
    a.Run();
    a.Stop();
    return 0;
}
*/
