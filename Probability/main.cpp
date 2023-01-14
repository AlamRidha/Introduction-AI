#include <iostream>
using namespace std;

float pA(float a, float n) {
    float p1 = a / n;
    return p1;
}

float pB(float b, float n) {
    float p2 = (b / (n-1));
    return p2;
}

float hasil(float p1, float p2, float p3){
	float jml = p1 * p3 / p2;
	return jml;
}

int main() {
    float a,b, n, w;
    float p1, p2, p3;
    cout << "Masukkan nilai P(A) : ";
	cin >> a;
    cout << "Masukkan nilai P(B) : ";
	cin >> b;
	cout << "Masukkan nilai P(W) : ";
	cin >> w;
    cout << "Masukkan nilai Jumlah Data : ";
	cin >> n;
	cout << endl;

    float p = pA(a, n);
    float q = pA(b, n);
    float m = pA(w, a);
    float bayes = hasil(p, q, m);

    cout << "Hasil P(A) : " << p << endl;
    cout << "Hasil P(B) : " << q << endl;
    cout << "Hasil P(B|A) : " << m<< endl;
    cout << "Hasil P(A|B) : " << bayes << endl;

    return 0;
}
