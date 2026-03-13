#include <iostream>
using namespace std;

    float Rata_rata(float a, float b){
        return (a+b)/2;
    }
    
    string Status_lulus(float r){
        if (r>=60)
            return "Lulus";
        else 
            return "Tidak Lulus";
        
    }

    int main() {
         float nilBI, nilMT, rata_rata; 
        string status;

        cout<<"Masukkan nilai Bahasa Inggris = ";
        cin>>nilBI;
        cout<<"Masukkan nilai Matematika = ";
        cin>>nilMT;

        rata_rata = Rata_rata(nilBI, nilMT);
        
        cout << "Status kelulusan = "<< Status_lulus(rata_rata)<<" ,dengan rata-rata: "<< rata_rata << endl;

    }
