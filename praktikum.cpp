#include<iostream>
using namespace std;

class RekeningBank {
public:
    virtual void potongAdmin() = 0;
    virtual ~RekeningBank() {}
};

class RekeningSyariah : public RekeningBank {
  private:
    string nama;
    double saldo;
