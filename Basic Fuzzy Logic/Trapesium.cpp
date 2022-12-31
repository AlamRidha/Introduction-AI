#include <iostream>
using namespace std;


int main(){
    float x,a,b,c,d,miu;
    //inputan x,a,b,c,d = 28,10,25,30,50

    cout << "-------------------------------------------------" << endl;
    cout << "------- FUNGSI KEANGGOTAAN HIMPUNAN FUZZY -------" << endl;
    cout << "--------------- FUNGSI TRAPESIUM ----------------" << endl;
    cout << "-------------------------------------------------" << endl << endl;

    cout << "Masukkan nilai x: ";
    cin >> x;

    cout << "Masukkan nilai a: ";
    cin >> a;

    cout << "Masukkan nilai b: ";
    cin >> b;

    cout << "Masukkan nilai c: ";
    cin >> c;

    cout << "Masukkan nilai d: ";
    cin >> d;


    if (x <= a || x >= d){
        miu = 0;
    }else if(x > a && x < b){
        miu = (x-a)/(b-a);
    }else if(x >= b && x <= c){
        miu = 1;
    }else{
        miu = (d-x) / (d-c);
    }

    cout << "-------------------------------------------------" << endl;
    cout << "Nilai miu menggunakan kurva Trapesium, adalah : " << miu << endl;
    cout << "-------------------------------------------------" << endl;
    return 0;
}

