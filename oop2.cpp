#include <iostream>
using namespace std;

class bangunDatar {

    //akses modifier 
    private:
    float panjang, lebar;
    public;
    float luas;

    void input (){ //metode input persegi panjang

    cout << "masukkan panjangnya = ";
    cin >>  panjang;
    cout << "masukkan lebarnya = ";
    cin >> lebar;

    }

    float hitungLuas (){
        return panjang  * lebar;
    }

    void display (){
       cout << "panjangnya = "<< panjang << endl;
       cout << "lebarnya = " << lebar << endl;
       cout << "luasnya = " << luas << endl;
    }
};

int main (){
    bangunDatar pp;
    pp.input();
    pp.display();

    return 0
}