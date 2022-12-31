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
//int main(){
//
//
//    return 0;
//}
