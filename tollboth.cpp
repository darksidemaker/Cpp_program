#include <iostream>
using namespace std;
class TollBoth
{
private:
    unsigned int numberCars;
    double moneyCollected;

public:
    TollBoth()
    {
        numberCars = 0;
        moneyCollected = 0;
    }

    void display()
    {
        cout << "Number of Cars passed by  toll booth: " << numberCars << endl;
        cout << "Toll Both money collected: $" << moneyCollected << endl;
    }
    void carPay()
    {
        numberCars++;
        moneyCollected += 0.50;
    }
    void noCarpay()
    {
        numberCars++;
    }
};

int main()
{
    TollBoth day1;

    day1.carPay();
    day1.carPay();
    day1.carPay();

    day1.noCarpay();
    day1.noCarpay();
    day1.carPay();
    day1.carPay();
    day1.carPay();
    day1.noCarpay();

    day1.display();

    TollBoth day2;
    day2.carPay();
    day2.carPay();
    day2.carPay();

    day2.noCarpay();
    day2.noCarpay();
    day2.carPay();
    day2.carPay();
    day2.carPay();
    day2.carPay();
    day2.noCarpay();
    day2.noCarpay();
    day2.noCarpay();
    day2.noCarpay();

    day2.display();

    return 0;
}
