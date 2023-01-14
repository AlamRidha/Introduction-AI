#include <iostream>
using namespace std;

int main(){
    int banyakData, banyakX, ak, akurasi = 0, a = 1, epoch = 1, db, fx, out = 0;
    int b = 0;
    float th; //Tresshold
    cout << "Masukkan banyak data : ";
    cin >> banyakData;
    cout << "Masukkan banyak x    : ";
    cin >> banyakX;
    cout << "Masukkan Tress Hold  : ";
    cin >> th;

    int dw[banyakX], w[banyakX], x[banyakData][banyakX], t[banyakX];

    //set nilai w dan dw 0
    for (int i = 0 ; i < banyakX ; i++){
        w[i] = 0;
        dw[i] = 0;
    }

    //tahap input
    for(int i = 0 ; i < banyakData ; i++){
        for(int j = 0 ; j < banyakX ; j++){
            cout << "Input x" << (j + 1) << " " << (i + 1) << "         = ";
            cin >> x[i][j];
        }
//      Memasukkan Target
        cout << "Masukkan T ke -: " << (i+1) << " = " ;
        cin >> t[i];
        cout << endl;
    }

    cout << "\n--------Algoritma Learning--------" << endl;

    //Tahap Learning
    while(akurasi != 1){
        cout << "Epoch ke - " << epoch << endl;

        for (int i = 0 ; i < banyakX ; i++){
            cout << "X" << (i+1) << "\t";
        }

        cout << "T\t";
        cout << "F(x)\t";
        cout << "Out\t";
        cout << "Akurasi\t ";
//      Menampilkan output sebanyak X input
        for(int i = 0 ; i < banyakX ; i++){
            cout << "W" << i+1 << "\t";
        }
//        cout << "W1\t";
//        cout << "W2\t";
//        cout << "W3\t";
        cout << "B" << endl;

        for (int i = 0 ; i < banyakData ; i++){
            for (int j = 0 ; j < banyakX ; j++){
                cout << x[i][j] << "\t";
            }
            cout << t[i] << "\t";

            fx = 0;
            for (int j = 0 ; j < banyakX ; j++){
                fx = fx + (w[j] * x[i][j]);
            }
            fx = fx + b;
            cout << fx << "\t";

            if(fx > th){
                out = 1;
            }else if(fx < (th * -1)){
                out = -1;
            }else{
                out = 0;
            }

            if(out == t[i]){
                ak = 1;
                akurasi++;
            }else{
                ak = 0;
            }

            cout << out << "\t";
            cout << ak << "\t";

            if(ak == 0){
                for(int j = 0 ; j < banyakX ; j++){
                    dw[j] = a * x[i][j] * t[i];
                }

                db = a * t[i];

                for(int j = 0; j< banyakX ; j++){
                    w[j] = w[j] + dw[j];
                }

                b = b + db;
            }

            for(int j = 0 ; j < banyakX ; j++){
                cout << w[j] << "\t";
            }

            cout << b << endl;
        }
        akurasi = akurasi / banyakData;
        epoch++;
        cout << endl;
    }

    //Algoritma Testing
    cout << "\n--------Algoritma Testing--------" << endl;
    for (int j = 0 ; j < banyakX ; j++){
            cout << "W" << j+1 << " = " << w[j] << endl;
     }
    cout << "B = " << b << endl;
    cout << "=====================================" << endl;
    for(int i = 0 ; i < banyakData ; i++){
        int tx[banyakX];
        for(int j = 0 ; j < banyakX ; j++){
            cout << "Input X " << j + 1 << " = ";
            cin >> tx[j];
        }

        fx = 0;

        for(int j = 0 ; j < banyakX ; j++){
            fx = fx + (w[j] * tx[j]);
        }
        fx = fx + b;

    cout << endl;
    cout << "-----Hasil Algoritma Learning------" << endl;
    cout << "FX = " << fx<< endl;

    if(fx > th){
        out = 1;
    }else if(fx < (th * -1)){
        out = -1;
    }else{
        out = 0;
    }

    cout << "Hasil nya adalah = " << out << endl;
    cout << "=====================================" << endl<< endl;
    }

//   Program Oleh Muhammad Allam Ridha
    return 0;
}
