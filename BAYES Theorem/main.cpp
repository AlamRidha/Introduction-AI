#include <iostream>
using namespace std;

float bagiData(float a, float n) {
    return a / n;
}

float hasil(float p1, float p2, float p3){
	return (p1 * p3) / p2;
}

float total(float jumlahMhs[], float golonganMhs[], float totalMhs){
    float result = 0, temp;
    string romawi[4] = {"I","II","III","IV"};
    for (int i = 0 ; i < 4 ; i++){
        temp = (bagiData(jumlahMhs[i], totalMhs)) * (bagiData(golonganMhs[i], jumlahMhs[i]));
        cout << "| Hasil Dari p(A" << romawi[i] << ") x p(B|" << romawi[i] << ") : " << temp << endl;
        result = result + temp;
    }
    return result;
}

int main() {
    //Deklarasi variabel dan array kosong
    float golonganMhs[4] = {};
    float jumlahMhs[4] = {};
    float totalGolongan, totalMhs;
    float sumAII = 0;

    //Meminta inputan dan menyimpan ke dalam array
    cout << "-------------------------------------------" << endl;
    for (int i = 0 ; i < 4 ; i++){
        cout << "| Masukkan Darah Golongan B Tingkat " << i + 1 << " : ";
        cin >> golonganMhs[i];
        totalGolongan  = totalGolongan + golonganMhs[i];
    }

    cout << endl;

     for (int i = 0 ; i < 4 ; i++){
        cout << "| Masukkan Jumlah Mahasiswa  Tingkat " << i + 1 << " : ";
        cin >> jumlahMhs[i];
        totalMhs = totalMhs + jumlahMhs[i];
    }

    //Menampilkan output dari data yang sudah diinputkan
    cout << "\n==================================================" << endl << endl;
    for(int i = 0 ; i < 4 ; i++){
        cout << "| Golongan Darah B Tingkat " << (i + 1) <<" Berjumlah " << golonganMhs[i] << " Dari " << jumlahMhs[i] << endl;
    }
    cout << "--- Total Golongan Mahasiswa " << totalGolongan << " ---" <<endl;
    cout << "--- Total Jumlah Mahasiswa " << totalMhs << " ---"<< endl << endl;
    cout << "==================================================" << endl;

    //Set Rumus sesuai soal yang diberikan
    float pAI = bagiData(jumlahMhs[1], totalMhs);
    float pBA = bagiData(golonganMhs[1], jumlahMhs[1]);

    float data = total(jumlahMhs, golonganMhs, totalMhs);
    float hasilAkhir = hasil(pAI, data, pBA);
    //Mengubah hasil akhir menjadi persen
    float hasilAkhirPersen = hasilAkhir * 100;

    cout << "==================================================" << endl;
    cout << "----- P(II | Gol B) : " << hasilAkhir  << " -----"<< endl;
    cout << "----- P(II | Gol B) : " << hasilAkhirPersen  << "% -----"<< endl;
    cout << "==================================================" << endl;
    cout << "\n   Program Oleh Muhammad Allam Ridha" << endl << "\t--- Terima Kasih ---" << endl;
    return 0;
}
