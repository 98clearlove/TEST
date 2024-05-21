#include <iostream>
using namespace std;
// ����һ��ö�����ͱ�ʾ CPU �ȼ�
enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };
// ���� CPU ��
class CPU {
public:
    //���������Ĺ��캯��
    CPU();
    // �������Ĺ��캯��
    CPU(enum CPU_Rank rank, int frequency, float voltage);
    //���ƹ��캯��
    CPU(const CPU& cpu);
    // ��������
    ~CPU();
    // ��Ա���������� CPU
    void Run();
    // ��Ա������ֹͣ CPU
    void Stop();
private:
    enum CPU_Rank rank; // CPU �ȼ������� P1��P2 �ȣ�
    int frequency;      // CPU Ƶ�ʣ��� MHz Ϊ��λ��
    float voltage;      // CPU ��ѹ���Է���Ϊ��λ��
};
//���������Ĺ��캯��ʵ��
CPU::CPU() {
    cout << "Construct CPU" << endl;
}
// �������Ĺ��캯��ʵ��
CPU::CPU(enum CPU_Rank rank, int frequency, float voltage) {
    // ��ʼ����Ա����
    this->rank = rank;
    this->frequency = frequency;
    this->voltage = voltage;
    cout << "Construct CPU" << endl;
}
//���ƹ��캯��ʵ��
CPU::CPU(const CPU& cpu) {
    this->rank = cpu.rank;
    this->frequency = cpu.frequency;
    this->voltage = cpu.voltage;
    cout << "CPU copy constructor" << endl;
}
// ��������ʵ��
CPU::~CPU() {
    cout << "Destruct CPU" << endl;
}
// ��Ա���������� CPU
void CPU::Run() {
    cout << "CPU run" << endl;
}
// ��Ա������ֹͣ CPU
void CPU::Stop() {
    cout << "CPU stop" << endl;
}
//����RAM��
class RAM {
public:
    //���������Ĺ��캯��
    RAM();
    //�������Ĺ��캯��
    RAM(int capacity);
    //���ƹ��캯��
    RAM(const RAM& ram);
    //��������
    ~RAM();
private:
    int capacity;      //�ڴ��С
};
//�����������캯��ʵ��
RAM::RAM() {
    cout << "Construct RAM" << endl;
}
//���������캯��ʵ��
RAM::RAM(int capacity) {
    this->capacity = capacity;
    cout << "Construct RAM" << endl;
}
//���ƹ��캯��ʵ��
RAM::RAM(const RAM& ram) {
    this->capacity = ram.capacity;
    cout << "RAM copy constructor" << endl;
}
//��������ʵ��
RAM::~RAM() {
    cout << "Destruct RAM" << endl;
}
//����CDROM��
class CDROM {
public:
    //���������Ĺ��캯��
    CDROM();
    //�������Ĺ��캯��
    CDROM(int speed);
    //���ƹ��캯��
    CDROM(const CDROM& cdrom);
    //��������
    ~CDROM();
private:
    int speed;
};
//���������Ĺ��캯��ʵ��
CDROM::CDROM() {
    cout << "Construct CDROM" << endl;
}
//���캯��ʵ��
CDROM::CDROM(int speed) {
    this->speed = speed;
    cout << "Construct CDROM" << endl;
}
// ���ƹ��캯��ʵ��
CDROM::CDROM(const CDROM& cdrom) {
    this->speed = cdrom.speed;
    cout << "CDROM copy constructor" << endl;
}
// ��������ʵ��
CDROM::~CDROM() {
    cout << "Destruct CDROM" << endl;
}
//����Computer��
class Computer {
public:
    //���������Ĺ��캯��
    Computer();
    //�������Ĺ��캯��
    Computer(CPU cpu, RAM ram, CDROM cdrom);
    //���ƹ��캯��
    Computer(const Computer& computer);
    //��������
    ~Computer();
private:
    CPU cpu;    //оƬ
    RAM ram;    //�ڴ�
    CDROM cdrom;    //����
};
//�����������캯��ʵ��
Computer::Computer() {
    cout << "Construct Computer" << endl;
}
//���������캯��ʵ��
Computer::Computer(CPU cpu1,RAM ram1,CDROM cdrom1):cpu(cpu1),ram(ram1),cdrom(cdrom1) {
    cout << "Construct Computer" << endl;
}
//���ƹ��캯��ʵ��
Computer::Computer(const Computer& computer):cpu(computer.cpu),ram(computer.ram), cdrom(computer.cdrom){
    cout << "Computer copy constructor" << endl;
}
//��������ʵ��
Computer::~Computer() {
    cout << "Destruct Computer" << endl;
}
// ������
int main12() {
    // ����һ�� CPU ���󣬵ȼ�Ϊ P6��Ƶ��Ϊ 300 MHz����ѹΪ 2.8 ����
    CPU cpu(P6, 300, 2.8);
    RAM ram(16);
    CDROM cdrom(500);
    Computer computer(cpu,ram,cdrom);
    Computer computer1(computer);
    return 0;
}