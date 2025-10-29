#include <iostream>
#include <cmath> // untuk sqrt() dan pow()
using namespace std;

// fungsi untuk menghitung jarak antara dua titik
double distance(double x1, double y1, double x2, double y2) {
    double dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return dist;
}

// fungsi untuk menghitung keliling lingkaran
double circumference(double r) {
    const double pi = 3.1416;
    return 2 * pi * r;
}

// fungsi untuk menghitung luas lingkaran
double area(double r) {
    const double pi = 3.1416;
    return pi * pow(r, 2);
}

int main() {
    double x1, y1, x2, y2;

    cout << "Masukkan koordinat pusat lingkaran (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Masukkan koordinat titik pada lingkaran (x2 y2): ";
    cin >> x2 >> y2;

    // menghitung radius dengan memanggil fungsi distance()
    double r = distance(x1, y1, x2, y2);

    cout << "\n=== Hasil Perhitungan Lingkaran ===" << endl;
    cout << "Jari-jari (radius)       = " << r << endl;
    cout << "Diameter                 = " << 2 * r << endl;
    cout << "Keliling (circumference) = " << circumference(r) << endl;
    cout << "Luas (area)              = " << area(r) << endl;

    return 0;
}
