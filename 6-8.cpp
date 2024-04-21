#include <iostream>
#include <cstdlib>
using namespace std;

class money
{
public:
    money();
    void moneySet(int centValue, int dollarValue);
    int getCent();
    int getDollar();
    void input();
    void output();
    double sum();
private:
    int cent;
    int dollar;
    double amount;
    void test();
};

int main(void)
{
    money first, second;
    cout << "Enter the money:";
    first.input();
    first.output();
    cout << "\n\nEnter the money:";
    second.input();
    second.output();
    return(0);
}

void money::input()
{
    cout << "\nEnter the dollar=>";
    cin >> cent;
    cout << "\nEnter the cent=> ";
    cin >> dollar;
    test();
}

void money::output()
{
    cout << "The monetary amount is ";
    cout << sum();
}

void money::test()
{
    if (cent < 0)
    {
        exit(1);
    }
    if (dollar < 0)
    {
        exit(1);
    }
}

void money::moneySet(int centValue, int dollarValue)
{
    cent = centValue;
    dollar = dollarValue;
    test();
}

double money::sum()
{
    amount = dollar + 0.01 * cent;
    return(amount);
}

int money::getCent()
{
    return (cent);
}