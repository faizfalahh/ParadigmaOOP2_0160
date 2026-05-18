#include <iostream>
using namespace std;

class remoteLampu {
private:
    string saklarNo[5];
public:
    void setsaklarNo(int i, string value) {
        saklarNo[i] = value;
    }
    string getsaklarNo(int i) {
        return saklarNo[i];
    }
};

int main() {
    remoteLampu lampurumah;

    lampurumah.setsaklarNo(0, "Lampu Teras Rumah");
    lampurumah.setsaklarNo(1, "Lampu Ruang Tamu");
    lampurumah.setsaklarNo(2, "Lampu Kamar Tidur");
    lampurumah.setsaklarNo(3, "Lampu Dapur");
}

