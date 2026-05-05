
#include<iostream>
using  namespace std;

class Bank{

    public :
    virtual void money() = 0;
};

class UPI:public Bank{

    public :
    void money(){

        cout<<"money by upi"<<endl;
    }
};

class Card:public Bank{

    public : 

    void money(){

        cout<<"money by Card"<<endl;
    }
};


int main()
{

    Bank *obj;

    UPI u;
    Card c;

    obj = &u;
    obj->money();

    obj = &c;
    obj->money();


    return 0;
}