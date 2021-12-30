#include <iostream>
using namespace std;

class Something
{
    public:
    int m_value = 0;

    Something(const Something& st_in)
    {
        m_value = st_in.m_value;

        cout << "Copy constructor" << endl;
    }

    Something()
    {
        cout << "Constructor" << endl;
    }

    void setValue(int value)
    {
        m_value = value;
    }

    int getValue() const
    {
        return m_value;
    }
};

void print(const Something &st)
{
    cout << st.getValue() << endl;
    cout << &st << endl;
}

int main()
{
    Something something;

    cout << &something << endl;
    print(something);

    return 0;
}