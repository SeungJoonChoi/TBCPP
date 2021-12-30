#include <iostream>

using namespace std;

class Cents
{
    private:
    int m_cents;

    public:
    Cents(int cents = 0)
    {
        m_cents = cents; 
    }
    int getCents() const { return m_cents; }
    int& getCents() { return m_cents; }

    operator int()
    {
        cout << "cast here" << endl;
        return m_cents;
    }
};

void printInt(const int &value)
{
    cout << value << endl;
}

class Dollar
{
    private:
    int m_dollars = 0;

    public:
    Dollar(const int& input) : m_dollars(input) {}

    operator Cents()
    {
        return Cents(m_dollars * 100);
    }
};

int main()
{
    Dollar dol(2);

    Cents cents = dol;

    printInt(cents);

    return 0;
}