#include <iostream>

using namespace std;

class Cents
{
    private:
    int m_cents;

    public:
    Cents(int cents = 0) { m_cents = cents; }
    int getCents() const { return m_cents; }
    int& getCents() { return m_cents; }

    Cents operator + (const Cents &c2)
    {
        return Cents(this->m_cents + c2.m_cents);
    }
};

int main()
{
    cout << (Cents(2) + Cents(3)).getCents() << endl;

    return 0;
}