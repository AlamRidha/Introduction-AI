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


//int main(){
//
//
//
//    return 0;
//}
