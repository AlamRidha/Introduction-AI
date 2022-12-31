#include <iostream>
using namespace std;


int main(){
    float x,a,b,c,miu;
    //inputan x,a,b,c = 26,10,20,40

    cout << "-------------------------------------------------" << endl;
    cout << "------- FUNGSI KEANGGOTAAN HIMPUNAN FUZZY -------" << endl;
    cout << "--------------- FUNGSI SEGITIGA -----------------" << endl;
    cout << "-------------------------------------------------" << endl << endl;

    cout << "Masukkan nilai x: ";
    cin >> x;

    cout << "Masukkan nilai a: ";
    cin >> a;

    cout << "Masukkan nilai b: ";
    cin >> b;

    cout << "Masukkan nilai c: ";
    cin >> c;


    if (x <= a || x >= c){
        miu = 0;
    }else if(x > a && x < b){
        miu = (x-a)/(b-a);
    }else if(x == b){
        miu = 1;
    }else{
        miu = (c-x) / (c-b);
    }

    cout << "-------------------------------------------------" << endl;
    cout << "Nilai miu menggunakan kurva Segitiga, adalah : " << miu << endl;
    cout << "-------------------------------------------------" << endl;
    return 0;
}


