#include <iostream>
using namespace std;

class mahasiswa {
    string nama;
    int umur;
    string jurusan;

    void output (){
        cout <<  "Nama : "<<nama<<endl;
        cout <<  "Umur : "<<umur<<endl;
        cout <<  "Jurusan : "<<jurusan<<endl;
    }
};

class matakuliah {
    private :
    string kodemk;
    string namamk;
    int sks;
    
    public:
    void input(){
        cout << "kode mk" << endl;
        cin >> kodemk ;
        cout << "nama mk" << endl;
        cin >> namamk ;
        cout << "SKS" << endl;
        cin >>sks;

    }

    void output(){
        
    }

    }
}

int main(

)
