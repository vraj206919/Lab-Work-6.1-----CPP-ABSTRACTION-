#include <iostream>
using namespace std;

class Bank
{
    public:
    virtual void view(){
        cout<<"one number"<<endl;
    }
};

class UPI:public Bank{
public :

    void view(){

        cout<<"too number"<<endl;
    }
};

class Card:public Bank{

    public :

    void view(){

        cout<<"three number"<<endl;
    }
};

int main()
{

    Bank *obj;

    Bank b;
    UPI u;
    Card c;


    obj = &b;
    obj->view();

    obj = &u;
    obj->view();

    obj = &u;
    obj->view();
    

    return 0;
}