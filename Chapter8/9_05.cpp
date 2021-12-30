#include <iostream>
using namespace std;

class Digit
{
    private:
    int m_digit;
    public:
    Digit(int digit = 0)
    : m_digit(digit)
    {}

    //prefix
    Digit & operator ++()
    {
        ++m_digit;

        return *this;
    }

    //postfix (파라미터에 더미로 아무거나 넣어주면 후위로 만들어짐 )
    Digit operator ++(int)
    {
        Digit temp(m_digit);

        ++(*this);
        // ++m_digit; // OK

        return temp;
    }

    friend ostream &operator << (ostream &out, const Digit &d)
    {
        out << d.m_digit;
        return out;
    }
};

int main()
{
    Digit d(5);
    
    cout << ++d << endl;
    cout << d << endl;

    cout << d++ << endl;
    cout << d << endl;

    return 0;
}