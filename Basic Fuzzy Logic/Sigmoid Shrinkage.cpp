#include <iostream>
#include <math.h>
using namespace std;


int main(){
    float x,alpha,beta,gamma,miu;
    //inputan x, alpha, beta = 22,15,40
    //inputan x, alpha, beta = 50,30,60

    cout << "-------------------------------------------------" << endl;
    cout << "------- FUNGSI KEANGGOTAAN HIMPUNAN FUZZY -------" << endl;
    cout << "--------- FUNGSI SIGMOID (PENYUSUTAN) -----------" << endl;
    cout << "-------------------------------------------------" << endl << endl;

    cout << "Masukkan nilai x: ";
    cin >> x;

    cout << "Masukkan nilai alpha: ";
    cin >> alpha;

    cout << "Masukkan nilai gamma: ";
    cin >> gamma;

    beta = (gamma + alpha)/2;

    cout << "\n-------------------------------------------------" << endl;
    cout << "beta " << beta << endl;

    if (x <= alpha){
        miu = 1;
    }else if(x > alpha && x < beta){
        miu = 1 - 2 * pow((x - alpha) / (gamma - alpha),2);
    }else if(x == beta){
        miu = 0.5;
    }else if(x > beta && x < gamma){
        miu = 2 * pow((gamma - x) / (gamma - alpha), 2);
    }else{
        miu = 0;
    }

    cout << "-------------------------------------------------" << endl;
    cout << "Nilai miu menggunakan kurva Sigmoid Penyusutan, adalah : " << miu << endl;
    cout << "-------------------------------------------------" << endl;
    return 0;
}

