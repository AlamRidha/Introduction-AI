
#include <iostream>
#include <math.h>
using namespace std;


int main(){
    float x,r1,r2,gamma,miu, beta1, beta2;
    //inputan x, r1, gamma, r2 = 30, 20, 50, 65
    //inputan x, r1, gamma, r2 = 55, 20, 50, 65

    cout << "-------------------------------------------------" << endl;
    cout << "------- FUNGSI KEANGGOTAAN HIMPUNAN FUZZY -------" << endl;
    cout << "---------------- FUNGSI LONCENG -----------------" << endl;
    cout << "-------------------------------------------------" << endl << endl;

    cout << "Masukkan nilai x: ";
    cin >> x;

    cout << "Masukkan nilai r1: ";
    cin >> r1;

    cout << "Masukkan nilai gamma: ";
    cin >> gamma;

    cout << "Masukkan nilai r2: ";
    cin >> r2;

    beta1 = (r1 + gamma) / 2;
    beta2 = (gamma + r2) / 2;

    cout << "\n-------------------------------------------------" << endl;
    cout << "gamma " << gamma << endl;
    cout << "beta 1 " << beta1 << endl;
    cout << "beta 2 " << beta2 << endl;


    if (x >= r1 && x <= beta1){
        miu = 2 * pow((x - r1) / (gamma - r1),2);
    }else if(x >= beta1 && x <= gamma){
        miu = 1 - 2 * pow((gamma - x) / (gamma - r1),2);
    }else if(x >= gamma && x <= beta2){
        miu = 1 - 2 * pow((r2 - x) / (r2 - gamma),2);
    }else if(x >= beta2 && x <= r2){
        miu = 2 * pow((r2 - x) / (r2 - gamma), 2);
        }else if(x <= r1 || x >= r2){
            miu = 0;
        }else{
            miu = 1;
    }

    cout << "-------------------------------------------------" << endl;
    cout << "Nilai miu menggunakan kurva Lonceng, adalah : " << miu << endl;
    cout << "-------------------------------------------------" << endl;

    return 0;
}

