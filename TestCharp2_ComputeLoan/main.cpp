#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout<<"Enter yearly interest rate ,for example is 8.25:";
    double annualInterestRate;
    cin>>annualInterestRate;

    double monthlyInterestRate = annualInterestRate/12/100;

    cout<<"Enter number of years as an integer,for example is 5:";
    int numberOfYears;
    cin>>numberOfYears;

    cout<<"Enter loan amount,for example is 1200000.95:";
    double loanAmount;
    cin>>loanAmount;

    double monthlyPayment = loanAmount*monthlyInterestRate/(1-1/pow(1+monthlyInterestRate,numberOfYears*12));
    double totalPayment = monthlyPayment*numberOfYears*12;
    monthlyPayment = static_cast<int>(monthlyPayment*100)/100.0;
    totalPayment = static_cast<int>(totalPayment*100)/100.0;
    cout<<"the monthly payment is "<<monthlyPayment<<"the total payment is "<<totalPayment<<endl;

    return 0;
}
