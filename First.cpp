#include <iostream>
using namespace std;
class CarsRacer
{
private:
    static int carsRacerCount;

public:
    CarsRacer()
    {
        carsRacerCount++;
    }
    void displayCount()
    {
        cout << "Number of Alive F1 Cars: " << carsRacerCount << endl;
    }
};
int CarsRacer::carsRacerCount = 0;
int main()
{
    CarsRacer car1;
    car1.displayCount();
    CarsRacer car2;
    car2.displayCount();
    CarsRacer car3;
    car3.displayCount();
    return 0;
}
