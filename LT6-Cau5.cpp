#include <iostream>
using namespace std;
//0850080030-Vo Thanh Luan-08THMT
//Bai 5 
// Đếm số lần xuất hiện

int dem(char* str, char kytu) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == kytu) {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    const int maxLength = 100;
    char chuoi[maxLength];
    char kytu;

    cout << "Nhap vao mot chuoi: ";
    cin.getline(chuoi, maxLength);

    cout << "Nhap vao ky tu can dem: ";
    cin >> kytu;

    int kq = dem(chuoi, kytu);
    cout << "Ky tu " << kytu << " xuat hien " << kq << " lan trong chuoi." << endl;

    return 0;
}