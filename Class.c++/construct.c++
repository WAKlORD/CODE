#include <iostream>
using namespace std;
class construct
{
public:
    int a, b, end1;

    construct()
    {
        a = 10;
        b = 20;
    }
};
int main()
{
    construct c;
    cout << "a:" << c.a << endl;
    cout << "b:" << c.b;
    return 1;
}

