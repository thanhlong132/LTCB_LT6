#include <iostream>
using namespace std;
//0850080030-Vo Thanh Luan-08THMT
//Bai 1
// Nhập xuất mảng

int main() {
    const int MAX_SIZE = 100;
    int a[MAX_SIZE];
    int n;

    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    if (n <= 0) {
        cout << "So luong phan tu khong hop le!" << endl;
        return 1;
    }

    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Mang vua nhap la : ";
    for (int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}