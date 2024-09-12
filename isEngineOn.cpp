#include <iostream>
using namespace std;
class Cars
{
private:
    string make = "Nano";
    string model = "TATA Nano XE";
    string color = "Red";
    int year = 2017;
    bool isEngineOn;

public:
    Cars(bool engineStatus)
    {
        isEngineOn = engineStatus;
    }

    void getter()
    {
        cout << "Car make :" << make << endl
             << "Car model :" << model << endl
             << "Car color :" << color << endl
             << "Car year :" << year << endl;

        if (isEngineOn == 1)
        {
            cout << "Car is On" << endl;
        }
        else
        {
            cout << "Car is Off" << endl;
        }
    }

    void start()
    {
        isEngineOn = 1;
    }
    void stop()
    {
        isEngineOn = 0;
    }

    void engineOnOff()
    {
        if (isEngineOn == 1)
        {
            stop();
        }
        else
        {
            start();
        }
    }
};
int main()
{
    Cars car1(0);
    car1.getter();
    
    cout << endl;
    car1.engineOnOff();
    car1.getter();
    cout << endl;

    car1.engineOnOff();
    car1.getter();
    cout << endl;

    car1.engineOnOff();
    car1.getter();
    cout << endl;

    return 0;
}
