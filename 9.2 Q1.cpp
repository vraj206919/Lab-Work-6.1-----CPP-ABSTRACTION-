#include <iostream>
using namespace std;
class Shapes
{
public:
    virtual void calculate() = 0;
};

class circle : public Shapes
{
    float flt;

public:
    circle(float radius)
    {

        flt = radius;
    }

    void calculate()
    {

        cout << "circle :" << 3.14 * flt * flt << endl;
    }
};

class Tringle : public Shapes
{

    float h, b;

public:
    Tringle(float hight, float base)
    {

        b = base;
        h = hight;
    }

    void calculate()
    {

        cout << "Tringle : " << 0.5 * b * h << endl;
    }
};

class Reactangle : public Shapes
{

    float l, w;

public:
    Reactangle(float length, float width)
    {

        l = length;
        w = width;
    }

    void calculate()
    {

        cout << "Reactangle :" << l * w << endl;
    }
};

int main()
{
    Shapes *obj;
    circle c(1000);
    Tringle t(1000, 2000);
    Reactangle r(3000, 4000);

    obj = &c;
    obj->calculate();

    obj = &t;
    obj->calculate();

    obj = &r;

    obj->calculate();

    return 0;
}