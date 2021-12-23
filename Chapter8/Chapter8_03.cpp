#include <iostream>
using namespace std;

class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:
    Fraction(const int &num_in = 1, const int &den_in = 1)
    {
        m_numerator = num_in;
        m_denominator = den_in;

        cout << "Fraction() Constructor" << endl;
    }
    void print()
    {
        cout << m_numerator << " / " << m_denominator << endl;
    }
};

int main()
{

    Fraction one_thirds{1, 3};
    one_thirds.print();

    return 0;
}