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
        cout << "Number of CarsRacer objects= " << carsRacerCount << endl;
    }
};
int CarsRacer::carsRacerCount = 0;
int main()
{
    CarsRacer car1;
    
    
    return 0;
}
