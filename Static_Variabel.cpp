

#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public:
    static int nim;
    int id;
    string nama;

    void setID();
    void printAll();
    mahasiswa(string pnama) :nama(pnama) { setID(); }
};
int mahasiswa::nim = 0;
void mahasiswa::setID() {
    id = ++nim;
}
void mahasiswa::printAll() {
    cout << " ID  = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << "NIM = " << nim << endl;
    cout << endl;
}

int main()
{
    mahasiswa mhs1("Lia Kurnia");
    mahasiswa mhs2("Astorni");
    mhs2.nim = 10;
    mahasiswa mhs3("Andi Kruwiawan");
    mhs3.nim = 30;
    mahasiswa mhs4("Joko Pprba");

    mhs1.printAll();

}

