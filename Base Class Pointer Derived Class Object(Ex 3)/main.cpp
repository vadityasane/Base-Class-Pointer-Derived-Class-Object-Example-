#include <iostream>

using namespace std;

class BasicCar
{
public:
    void start()
    {
        cout<<"Car Started"<<endl;
    }
};

class AdvanceCar : public BasicCar
{
    public:
    void MusicPlayer()
    {
        cout<<"Music Player is Started"<<endl;
    }
};
int main()
{
    AdvanceCar a;
    BasicCar *p=&a;

    p->start();
    //p->MusicPlayer(); //music Player cant be executed(we can only call base class function
    return 0;
}
