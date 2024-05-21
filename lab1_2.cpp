#include <iostream>
using namespace std;
// 定义一个枚举类型表示 CPU 等级
enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };
// 声明 CPU 类
class CPU {
public:
    //不带参数的构造函数
    CPU();
    // 带参数的构造函数
    CPU(enum CPU_Rank rank, int frequency, float voltage);
    //复制构造函数
    CPU(const CPU& cpu);
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
//不带参数的构造函数实现
CPU::CPU() {
    cout << "Construct CPU" << endl;
}
// 带参数的构造函数实现
CPU::CPU(enum CPU_Rank rank, int frequency, float voltage) {
    // 初始化成员变量
    this->rank = rank;
    this->frequency = frequency;
    this->voltage = voltage;
    cout << "Construct CPU" << endl;
}
//复制构造函数实现
CPU::CPU(const CPU& cpu) {
    this->rank = cpu.rank;
    this->frequency = cpu.frequency;
    this->voltage = cpu.voltage;
    cout << "CPU copy constructor" << endl;
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
//声明RAM类
class RAM {
public:
    //不带参数的构造函数
    RAM();
    //带参数的构造函数
    RAM(int capacity);
    //复制构造函数
    RAM(const RAM& ram);
    //析构函数
    ~RAM();
private:
    int capacity;      //内存大小
};
//不带参数构造函数实现
RAM::RAM() {
    cout << "Construct RAM" << endl;
}
//带参数构造函数实现
RAM::RAM(int capacity) {
    this->capacity = capacity;
    cout << "Construct RAM" << endl;
}
//复制构造函数实现
RAM::RAM(const RAM& ram) {
    this->capacity = ram.capacity;
    cout << "RAM copy constructor" << endl;
}
//析构函数实现
RAM::~RAM() {
    cout << "Destruct RAM" << endl;
}
//声明CDROM类
class CDROM {
public:
    //不带参数的构造函数
    CDROM();
    //带参数的构造函数
    CDROM(int speed);
    //复制构造函数
    CDROM(const CDROM& cdrom);
    //析构函数
    ~CDROM();
private:
    int speed;
};
//不带参数的构造函数实现
CDROM::CDROM() {
    cout << "Construct CDROM" << endl;
}
//构造函数实现
CDROM::CDROM(int speed) {
    this->speed = speed;
    cout << "Construct CDROM" << endl;
}
// 复制构造函数实现
CDROM::CDROM(const CDROM& cdrom) {
    this->speed = cdrom.speed;
    cout << "CDROM copy constructor" << endl;
}
// 析构函数实现
CDROM::~CDROM() {
    cout << "Destruct CDROM" << endl;
}
//声明Computer类
class Computer {
public:
    //不带参数的构造函数
    Computer();
    //带参数的构造函数
    Computer(CPU cpu, RAM ram, CDROM cdrom);
    //复制构造函数
    Computer(const Computer& computer);
    //析构函数
    ~Computer();
private:
    CPU cpu;    //芯片
    RAM ram;    //内存
    CDROM cdrom;    //光驱
};
//不带参数构造函数实现
Computer::Computer() {
    cout << "Construct Computer" << endl;
}
//带参数构造函数实现
Computer::Computer(CPU cpu1,RAM ram1,CDROM cdrom1):cpu(cpu1),ram(ram1),cdrom(cdrom1) {
    cout << "Construct Computer" << endl;
}
//复制构造函数实现
Computer::Computer(const Computer& computer):cpu(computer.cpu),ram(computer.ram), cdrom(computer.cdrom){
    cout << "Computer copy constructor" << endl;
}
//析构函数实现
Computer::~Computer() {
    cout << "Destruct Computer" << endl;
}
// 主函数
int main12() {
    // 创建一个 CPU 对象，等级为 P6，频率为 300 MHz，电压为 2.8 伏特
    CPU cpu(P6, 300, 2.8);
    RAM ram(16);
    CDROM cdrom(500);
    Computer computer(cpu,ram,cdrom);
    Computer computer1(computer);
    return 0;
}