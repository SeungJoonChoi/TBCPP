#include <iostream>

using namespace std;

class Something
{
    public:
    class _init
    {
        public:
        _init()
        {
            s_value = 9876;
        }
    };

    private:
    static int s_value;
    int m_value;

    static _init s_initializer;

    public:

    Something()
    : m_value(123)//, s_value(1024)
    {}

    static int getValue()
    {
        // return this->s_value;
        // return m_value;
        return s_value;
    }

    int temp()
    {
        return this->s_value;
    }
};

int Something::s_value;
Something::_init Something::s_initializer;

int main()
{
    cout << Something::getValue() << endl;

    Something s1, s2;
    cout << s1.getValue() << endl;

    int (Something::*fptr1)() = &Something::temp;

    cout << (s2.*fptr1)() << endl;

    int (*fptr2)() = &Something::getValue;

    cout << fptr2() << endl;

    return 0;
}