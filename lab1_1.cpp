/*#include<iostream>
using namespace std;
// ����һ��ö�����ͱ�ʾ CPU �ȼ�
enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };
// ���� CPU ��
class CPU {
public:
    // �������Ĺ��캯��
    CPU(enum CPU_Rank rank, int frequency, float voltage);
    // Ĭ�Ϲ��캯��
    CPU();
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
// ���캯��ʵ��
CPU::CPU(enum CPU_Rank rank, int frequency, float voltage) {
    // ��ʼ����Ա����
    this->rank = rank;
    this->frequency = frequency;
    this->voltage = voltage;

    cout << "Construct CPU" << endl;
}
// Ĭ�Ϲ��캯��ʵ��
CPU::CPU() {
    cout << "Construct CPU" << endl;
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
int main11(){
    CPU a(P6, 300, 2.8);
    a.Run();
    a.Stop();
    return 0;
}
*/
