#include <iostream>
using namespace std;
class Cars
{
private:
    string make = "Tata";
    string model = "Nexon";
    string color = "blue";
    int year = 2020;
    bool isEngineOn;

public:
    Cars(bool engineOnOff)
    {
        isEngineOn = engineOnOff;
    }

    void getter_car()
    {
        cout << "Car make :" << make << endl
             << "Car model :" << model << endl
             << "Car color :" << color << endl
             << "Car year :" << year << endl;

        if (isEngineOn == true)
        {
            cout << "Car Engine start" << endl;
        }
        else
        {
            cout << "Car Engine stop" << endl;
        }
    }

    void start()
    {
        isEngineOn = true;
    }
    void stop()
    {
        isEngineOn = false;
    }

    void engineStatus()
    {
        if (isEngineOn == true)
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
    Cars car(false);
    car.getter_car();

    cout << endl;
    car.engineStatus();
    car.getter_car();
    cout << endl;

    car.engineStatus();
    car.getter_car();
    cout << endl;

    car.engineStatus();
    car.getter_car();
    cout << endl;

    return 0;
}
