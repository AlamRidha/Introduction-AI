#include <iostream>

using namespace std;

int main(){
    float x,a,b,miu;
    //x,a,b = 34,20,40

    cout << "-------------------------------------------------" << endl;
    cout << "------- FUNGSI KEANGGOTAAN HIMPUNAN FUZZY -------" << endl;
    cout << "-------------- FUNGSI LINEAR NAIK ---------------" << endl;
    cout << "-------------------------------------------------" << endl << endl;

    cout << "Masukkan nilai x: ";
    cin >> x;

    cout << "Masukkan nilai a: ";
    cin >> a;

    cout << "Masukkan nilai b: ";
    cin >> b;


    if (x <= a){
        miu = 0;
    }else if(x > a && x < b){
        miu = (x-a)/(b-a);
    }else{
        miu = 1;
    }

    cout << "-------------------------------------------------" << endl;
    cout << "Nilai miu menggunakan kurva Linear Naik, adalah : " << miu << endl;
    cout << "-------------------------------------------------" << endl;


    return 0;
}
