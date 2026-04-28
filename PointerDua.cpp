#include <iostream>
using namespace std;

class mahasiswa
{
public:
    int nim;
    void showNim()
    {
        cout << "No Induk = " << nim << endl;
    }
};

int main ()
{
    mahasiswa *mhs = new mahasiswa{1};
    mhs->showNim();
    delete mhs; // menghapus objek yang dibuat dengan new
    return 0;
}
