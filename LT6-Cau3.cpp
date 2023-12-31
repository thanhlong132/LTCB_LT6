#include <iostream>
using namespace std;
//0850080030-Vo Thanh Luan-08THMT
//Bai 3
// Đảo ngược chuỗi

void daoNguocChuoi(char* chuoi) {
    int length = 0;
    while (chuoi[length] != '\0') {
        length++;
    }

    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = chuoi[start];
        chuoi[start] = chuoi[end];
        chuoi[end] = temp;
        start++;
        end--;
    }
}

int main() {
    const int maxLength = 100;
    char chuoi[maxLength];

    cout << "Nhap vao mot chuoi: ";
    cin.getline(chuoi, maxLength);

    daoNguocChuoi(chuoi);

    cout << "Chuoi sau khi dao nguoc: " << chuoi << endl;

    return 0;
}