#include <iostream>
using namespace std;


int main(){
    float x,a,b,miu;
    //x,a,b = 25,10,40

    cout << "-------------------------------------------------" << endl;
    cout << "------- FUNGSI KEANGGOTAAN HIMPUNAN FUZZY -------" << endl;
    cout << "------------- FUNGSI LINEAR TURUN ---------------" << endl;
    cout << "-------------------------------------------------" << endl << endl;

    cout << "Masukkan nilai x: ";
    cin >> x;

    cout << "Masukkan nilai a: ";
    cin >> a;

    cout << "Masukkan nilai b: ";
    cin >> b;


    if (x <= a){
        miu = 1;
    }else if(x > a && x < b){
        miu = (b-x)/(b-a);
    }else{
        miu = 0;
    }

    cout << "-------------------------------------------------" << endl;
    cout << "Nilai miu menggunakan kurva Linear Turun, adalah : " << miu << endl;;
    cout << "-------------------------------------------------" << endl;

    return 0;
}

