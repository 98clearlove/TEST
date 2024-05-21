#include <iostream>
#include <string>
using namespace std;

int main23() {
    char ar_1[100];
    char ar_2[100];
    cin >> ar_1;
    cin >> ar_2;
    // 计算第一个字符串的实际长度
    int len_1 = 0;
    while (ar_1[len_1] != '\0') {
        len_1++;
    }
    // 计算第二个字符串的实际长度
    int len_2 = 0;
    while (ar_2[len_2] != '\0') {
        len_2++;
    }
    // 将 `ar_2` 的内容追加到 `ar_1` 的末尾
    for (int i = 0; i < len_2; i++) {
        ar_1[len_1 + i] = ar_2[i];
    }
    ar_1[len_1 + len_2] = '\0'; 

    cout << ar_1 << endl;

    return 0;
}
