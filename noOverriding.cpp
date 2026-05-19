#include <iostream>
using namespace std;

class baseClass
{
public:
    virtual void perkenalan() final
    {
        cout << "Hello saya function dari base class";
    }
};
class deprivedClass : public baseClass
{
public:
    void perkenalan1()
    {
        cout << "Hallo saya function dari deprived Class";
    }
};