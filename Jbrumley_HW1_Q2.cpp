#include<iostream>
#include<string>

using namespace std;

const static int N=(5);
int CB1[N]={};
int CB2[N]={};
float balance;

class Check{
    int CheckNum;
    int CheckMemo;
    int CheckAmount;
};

class CheckBook{
    public:
        class Check;
        int numOfChecks;
        int allChecks;
        void initBalance(float amount1);
        void showBalance();
        void deposit(float amount);
        void displayChecks();
        bool writeCheck(float amount);
        int getChecks();
        int lastDeposit;
};
CheckBook cb1,cb2;
int main()
{
cb1.deposit(1000);
cb1.deposit(500);
for(int i=0; i<10;i++)
{
cb1.writeCheck(150);
cb2.writeCheck(130);
}
cout<<"cb1 check details"<<endl;
cb1.displayChecks();
cout<<"cb2 check details"<<endl;
cb2.displayChecks();
cout<<cb1.getChecks()<<endl;
cout<<cb2.getChecks()<<endl;
}

int CheckBook::getChecks()
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
    cout<<"Check in the amount of$"<<CB1<<", and you have used "<<endl;
    cout<<"Check in the amount of$"<<CB1<<", and you have used "<<endl;
}

bool CheckBook::writeCheck(float amount)
{
    if (allChecks>10)
    {
        cout<<" "<<endl;
    }
    else if(balance>=amount)
    {
        balance-=amount;
        numOfChecks++;
        allChecks++;
        cout<<"You have used "<<" checks this week."<<endl;
        return true;
    }else{
        return false;
    };
};
