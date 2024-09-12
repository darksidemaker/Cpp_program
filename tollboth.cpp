#include <iostream>
using namespace std;
class TollBoth
{
private:
    unsigned int numberCars;
    double moneyCollected;
    unsigned int payingCars;
    unsigned int nonPayingCars;

public:
    TollBoth()
    {
        numberCars = 0;
        moneyCollected = 0;
        payingCars = 0;
        nonPayingCars = 0;
    }

    void display()
    {
        cout << "Number of Cars passed by  toll booth: " << numberCars << endl;
        cout << "Toll Both money collected: $" << moneyCollected << endl;
        cout << "Number of paying cars: " << payingCars << endl;
        cout << "Number of non paying cars: " << nonPayingCars << endl;
    }
    void carPay()
    {
        numberCars++;
        moneyCollected += 0.50;
        payingCars++;
    }
    void noCarpay()
    {
        numberCars++;
        nonPayingCars++;
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

    return 0;
}
