#include <bits/stdc++.h>
using namespace std;
class BankAccount{
    int balance;
    public:
    BankAccount(){balance=0;}
    int getBalance(){return balance;}
    BankAccount(int b){balance=b;}
    BankAccount(class BankAccount &account){
        balance=account.balance;
    }
    void deduct(int n){
        balance-=n;
        cout<<"Deducted "<<n<<" from balance"<<endl;
        
    }
};
int main(){
    BankAccount account1;
    // default constructor called since no arguments given
    cout<<"Balance of acount1 : "<<account1.getBalance()<<endl; //shows default 0
    BankAccount account2(1000);
    // parametrixied constructor called
    cout<<"Balance of account2 : "<<account2.getBalance()<<endl; // shows 1000
    BankAccount account3(account2);
    // copy constructor called
    cout<<"Balance of account3 : "<<account3.getBalance()<<endl; // shows same 1000
    account3.deduct(200);
    cout<<"Balance of account3 : "<<account3.getBalance()<<endl; // shows 1000-200=800
    cout<<"Balance of account2 : "<<account2.getBalance()<<endl; // doesn't change with changing acount3 balance
    return 0;
}

