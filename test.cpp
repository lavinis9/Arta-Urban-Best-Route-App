#include <iostream>
#include <string>

using namespace std;

void print()
{
    cout << "Exoume 2 tupous lewforeiwn " << endl;
    cout << "--------------------------" << endl;
    cout << "Me diaforetika xarakthristika " << endl;
}
class BigVehicle
{
protected:
    string marka, ekdosh, kausimo, rupoi;
    double cc, kv, theseis;

public:
    BigVehicle(string m1, string ekd, string kaus, string rp, double cc, double kv, double the)
    {
        marka = m1;
        ekdosh = ekd;
        kausimo = kaus;
        rupoi = rp;
        cc = cc;
        kv = kv;
        theseis = the;
    }
    friend ostream &operator<<(ostream &os, BigVehicle &b)
    {
        os << "H marka tou lewforiou einai : " << b.marka << endl;
        cout << "--------------------------" << endl;
        os << "To montelo einai : " << b.ekdosh << endl;
        cout << "--------------------------" << endl;
        os << "To kausimo pou kaei : " << b.kausimo << endl;
        cout << "--------------------------" << endl;
        os << "H klassh twn rupwn : " << b.rupoi << endl;
        cout << "--------------------------" << endl;
        os << "Ta kuvika einai : " << b.cc << endl;
        cout << "--------------------------" << endl;
        os << "Ta aloga einai : " << b.kv << endl;
        cout << "--------------------------" << endl;
        os << "Oi theseis pou exei : " << b.theseis << endl;

        return os;
    }
    virtual void show()
    {
        cout << "------------------" << endl;
        cout << "To lewforio megalou typou=" << endl;
        cout << "------------------" << endl;
    }
};

class MiniVehicle : public BigVehicle
{
protected:
public:
    void show() override
    {
        cout << "------------------" << endl;
        cout << "To lewforio mikrou tupou" << endl;
    }
};

int main()
{
    print();
    for (int i = 0; i < 3; i++)
    {
        BigVehicle B1("VOLVO", "B10BLE", "DIESEL", "Euro 2", 9600, 245, 50);
        B1.show();
        cout << B1 << endl;
    }
    cout << "Kai alla 3 megala leoforia" << endl;
    return 0;
}