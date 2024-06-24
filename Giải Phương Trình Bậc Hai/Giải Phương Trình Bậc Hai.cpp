#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Chuong trinh giai phuong trinh bat hai";
    int a, b, c;
    double x1, x2, delta;
    cout << "Nhap a b c: \n";
    cin >> a;
    cin >> b;
    cin >> c;
    if (a == 0) {
        if (b == 0) {
            cout << "Phuong trinh vo nghiem";
        }
        else {
            x1 = -c / b;
            cout << "Phuong trinh co 1 nghiem " << x1 << "\n";
        }
    }
    else {
        delta = b * b - 4 * a * c;
        if (delta < 0) {
            cout << "Phuong trinh vo nghiem";
        }
        else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Phuong trinh co hai nghiem\n" << x1 << "\n" << x2;
        }
    }
}