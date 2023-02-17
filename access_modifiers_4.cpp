/*(SavingsAccount Class) Create a SavingsAccount class. Use a static data member annual- InterestRate to store
the annual interest rate for each of the savers. Each member of the class contains a private data member
savingsBalance indicating the amount the saver currently has on deposit. Provide member function
calculateMonthlyInterest that calculates the monthly interest by multiplying the balance by annualInterestRate
divided by 12; this interest should be added to savingsBalance. Provide a static member function
modifyInterestRate that sets the static annualInterestRate to a new value. Write a driver program to test class
SavingsAccount. Instantiate two different objects of class SavingsAccount, saver1 and saver2, with balances of
$2000.00 and $3000.00, respectively. Set the annualInterestRate to 3 percent. Then calculate the monthly interest
and print the new balances for each of the savers. Then set the annualInterestRate to 4 percent, calculate the next
month’s interest and print the new balances for each of the savers.*/
#include<iostream>
#include<string.h>
using namespace std;

class SavingsAccount
{
	private:
    static float annualinterestrate;
    int savingsbalance;
    public:
    SavingsAccount(int bal)
    {
        this->setsavingsbalance(bal);
    }

    void setsavingsbalance(int bal)
    {
        this->savingsbalance = bal;
    }
    int getsavingsbalance()
    {
        return savingsbalance;
    }

    void calculatemonthlyinterest()
    {
        savingsbalance = savingsbalance + savingsbalance * (annualinterestrate/12.0);
    }

    static void modifyinterestrate()
    {
       annualinterestrate=4;//set annual interst rate to 4%
    }
}; float SavingsAccount :: annualinterestrate = 3;//initially set annual interest rate to 3%

int main()
{
    SavingsAccount saver1(2000);
    SavingsAccount saver2(3000);

    saver1.calculatemonthlyinterest();
    saver2.calculatemonthlyinterest();

    cout << "\n\tThe balance of saver 1 after 3% interest is : " << saver1.getsavingsbalance();
    cout << "\n\tThe balance of saver 2 after 3% interest is : " << saver2.getsavingsbalance() << endl;

    SavingsAccount :: modifyinterestrate();

    saver1.calculatemonthlyinterest();
    saver2.calculatemonthlyinterest();

    cout << "\n\tThe balance of saver 1 after 4% interest is : " << saver1.getsavingsbalance();
    cout << "\n\tThe balance of saver 2 after 4% interest is : " << saver2.getsavingsbalance();
}

