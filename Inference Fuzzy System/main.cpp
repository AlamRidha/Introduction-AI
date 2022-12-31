#include <iostream>
using namespace std;

float pmtTurun (float x){
    float miu;

    if(x <= 1000){
        miu = 1;
    }else if(x > 1000 && x < 5000){
        miu = (5000 - x) / 4000;
    }else{
        miu = 0;
    }

    return miu;
}

float pmtNaik (float x ){
    float miu;

    if(x <= 1000){
        miu  = 0;
    }else if( x > 1000 && x < 5000){
        miu = (x - 1000) / 4000;
    }else{
        miu = 1;
    }

    return miu;
}

float psdBanyak (float y){
    float miu;

    if(y <= 100){
        miu = 0;
    }else if(y > 100 && y < 600){
        miu = (y - 100) / 500;
    }else{
        miu = 1;
    }

    return miu;
}


float psdSedikit (float y){
    float miu;

    if(y <= 100){
        miu = 1;
    }else if( y > 100 && y < 600){
        miu =(600 - y) / 500;
    }else {
        miu = 0;
    }

    return miu;
}


float apredikat(float a, float b){
    float apr;

    if(a > b){
        apr = b;
    }else{
        apr = a;
    }

    return apr;
}


float prdTambah(float apr){
    float a,b,z;
    a = 2000;
    b = 7000;

    z = a + (apr * (b - a ));
    return z;
}


float prdKurang (float apr){
    float a,b,z;
    a = 2000;
    b = 7000;

    z = b - (apr * (b -a));
    return z;
}



int main()
{
    float x, y, r1, r2, r3, r4, z1, z2, z3, z4, result;

    cout << "======TAHAP FUZIFIKASI======" << endl;
    cout << "Masukkan permintaan : ";
    cin >> x;
    cout << "Miu Permintaan Naik : "<< pmtNaik(x) << endl;
    cout << "Miu Permintaan Turun : "<< pmtTurun(x) << endl;

    cout << "masukkan persediaan x : ";
    cin >> y;
    cout << "Miu Persediaan Banyak : " << psdBanyak(y) << endl;
    cout << "Miu Persediaan Sedikit : " <<psdSedikit(y) << endl<< endl;

    r1 = apredikat(pmtTurun(x), psdBanyak(y));
    r2 = apredikat(pmtTurun(x), psdSedikit(y));
    r3 = apredikat(pmtNaik(x), psdBanyak(y));
    r4 = apredikat(pmtNaik(x), psdSedikit(y));

    z1 = prdKurang(r1);
    z2 = prdKurang(r2);
    z3 = prdTambah(r3);
    z4 = prdTambah(r4);

    cout << "======TAHAP INFERENSI======" << endl;
    cout << "APR [1] : " << r1 << endl;
    cout << "Z1 : " << z1 << endl;

    cout << "APR [2] : " << r2 << endl;
    cout << "Z2 : " << z2 << endl;

    cout << "APR [3] : " << r3 << endl;
    cout << "Z3 : " << z3 << endl;

    cout << "APR [4] : " << r4 << endl;
    cout << "Z4 : " << z4 << endl << endl;


    result = ((r1 * z1) + (r2 * z2) + (r3 * z3) + (r4 * z4)) / (r1 + r2 + r3 + r4);

    cout << "======TAHAP DEFUZZIFIKASI======"<<endl << result;



    return 0;
}
