#include <iostream>
using namespace std;
class TollBoth
{
private:
    unsigned int totalCars;
    double totalMoney;
    unsigned int payingCars;
    unsigned int nonPayingCars;

public:
    TollBoth()
    {
        totalCars = 0;
        totalMoney = 0;
        payingCars = 0;
        nonPayingCars = 0;
    }

    void display()
    {
        cout << "Number of Cars passed by  toll booth: " << totalCars << endl;
        cout << "Toll Both money collected: $" << totalMoney << endl;
        cout << "Number of paying cars: " << payingCars << endl;
        cout << "Number of non paying cars: " << nonPayingCars << endl;
    }
    void carPay()
    {
        totalCars++;
        totalMoney += 0.50;
        payingCars++;
    }
    void noCarpay()
    {
        totalCars++;
        nonPayingCars++;
    }
};

int main()
{
    TollBoth tb;

    tb.carPay();
    tb.carPay();
    tb.carPay();
    tb.noCarpay();
    tb.noCarpay();
    tb.carPay();
    tb.carPay();
    tb.carPay();
    tb.carPay();
    tb.carPay();
    tb.noCarpay();
    tb.noCarpay();
    tb.noCarpay();

    tb.display();

    return 0;
}
