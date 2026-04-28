#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang
{
private:
    string nama;

public:
    void setNama(string pNama);
    friend class siswa;
};

class siswa
{
private:
    int id;

public:
    void setId(int pId);
    void displayAll(orang &a);
};

// Implementasi method displayAll
void siswa::displayAll(orang &a)
{
    cout << id << endl << a.nama << endl;
}

// Implementasi method setNama
void orang::setNama(string pNama)
{
    nama = pNama;
}

// Implementasi method setId
void siswa::setId(int pId)
{
    id = pId;
}

int main()
{
    orang joko;
    joko.setNama("Joko Susilo");
    
    siswa joko_siswa;
    joko_siswa.setId(1);
    
    joko_siswa.displayAll(joko);
    
    return 0;
}