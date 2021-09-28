#include<iostream>
#include<string>

using namespace std;

const static int N=(5);
int Check[N]={5,4,3,2,1};
float balance;

struct Check{
    int CheckNum;
    int CheckMemo;
    int CheckAmount;
};

class CheckBook{
    public:
        int numOfChecks;
        void initBalance(float amount1);
        void showBalance();
        void deposit(float amount);
        void displayChecks();
        bool writecheck(float amount);
        int getCheck();
        int lastDeposit;
};
CheckBook c1, c2, c3, c4, c5;

int main()
{
    c1.initBalance(500);
    c1.deposit(20);
    c1.showBalance();
    c1.writecheck(100);
    c1.showBalance();
    c2.deposit(300);
    c2.showBalance();
    c2.deposit(50);
    c2.showBalance();
    c2.writecheck(100);
    c2.showBalance();
    c2.writecheck(140);
    c2.showBalance();
    c3.writecheck(1000);
    c3.showBalance();
    c4.deposit(3);
    c4.showBalance();
    c4.writecheck(140);
    c4.showBalance();
    c5.writecheck(140);
    c5.showBalance();
    c5.writecheck(140);
    c5.showBalance();
    c1.getCheck();

};
int CheckBook::getCheck()
{
    cout<<"You have a total of "<<numOfChecks<<" transactions"<<endl;
}
void CheckBook::initBalance(float amount1)
{
    balance = amount1;
    numOfChecks=0;
}
void CheckBook::showBalance()
{
    cout<<"Your balance is currently $"<<balance<<endl;
    cout<<"Your last deposit was $"<<lastDeposit<<endl;
};
void CheckBook::deposit(float amount)
{
    balance=balance+amount;
    numOfChecks++;
    lastDeposit=amount;
}
void CheckBook::displayChecks()
{

}

bool CheckBook::writecheck(float amount)
{
    if (Check[N]>=5)
    {
        cout<<"You have used your 5 checks this week"<<endl;
    }
    else if(balance>=amount)
    {
        balance-=amount;
        Check[N]++;
        numOfChecks++;
        cout<<"You have used "<<Check[N]<<" checks this week."<<endl;
        return true;
    }else{
        return false;
    };
};
