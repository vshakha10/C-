#include<iostream>
#include <vector>
#include <string>
using namespace std;
class bank
{
    private:
    double balance;
    int account_num;
    string account_holdername;

    public:
    bank(int accNumber, string accHolderName, double initialBalance) 
    {
        account_num = accNumber;
        account_holdername = accHolderName;
        balance = initialBalance;
    }

    void deposit(double amount) 
    {
        balance=balance+amount;
        cout << "Deposit successful. Current balance: " << fixed  << balance << endl;
    }

    void withdraw(double amount) 
    {
        if (amount <= balance)
        {
            balance=balance-amount;
            cout << "Withdrawal successful. Current balance: " << fixed << balance << endl;
        }
        else 
        {
            cout << " Withdrawal failed." << endl;
        }
    }
    void transfer(bankaccount & otheraccount,double amount)
    {
        if(amount<=balance)
        {
            balance=balance - amount;
            otherAccount.balance =balance + amount;
            cout << "Transfer successful. Current balance: " << fixed  << balance << endl;
        } 
        else 
        {
            cout << "Insufficient funds. Transfer failed " << endl;
        }
    }
    void display() 
    {
        cout << "Account Number: " << account_num << endl;
        cout << "Account Holder Name: " << account_holdername << endl;
        cout << "Balance: " << fixed  << balance << endl;
    }
    double getBalance() 
    {
        return balance;
    }
};

bank * findAccount(vector<bank> & accounts, int account_num) 
{
    for (int i = 0; i < accounts.size(); ++i) 
    {
        if (accounts[i].getAccountNumber() == account_num) 
        {
            return & accounts[i];
        }
    }
    return nullptr;
}

int main() 
{
    vector<bank> accounts;
    accounts.push_back(bank(1, "janvi", 1000));
    accounts.push_back(bank(2, "vishakha", 2000));

    int choice;
    do
    {
       
        cout << "\nBank Management System Menu:" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Transfer" << endl;
        cout << "5. Display Account Details" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1: 
            {
                int accNum;
                string accHolderName;
                double initialBalance;
                cout << "Enter Account Number: ";
                cin >> accNumber;
                cout << "Enter Account Holder Name: ";
                cin.ignore(); 
                getline(cin, accHolderName);
                cout << "Enter Initial Balance: ";
                cin >> initialBalance;
                accounts.push_back(BankAccount(accNumber, accHolderName, initialBalance));
                cout << "Account created successfully." << endl;
                break;
            }
            case 2:
            {
                int accNumber;
                double amount;
                cout << "Enter Account Number: ";
                cin >> accNumber;
                BankAccount *acc = findAccount(accounts, accNumber);
                if (acc != nullptr) 
                {
                    cout << "Enter Deposit Amount: ";
                    cin >> amount;
                    acc->deposit(amount);
                } else 
                {
                    cout << "Account not found." << endl;
                }
                break;
            }
            case 3: 
            {
                int accNumber;
                double amount;
                cout << "Enter Account Number: ";
                cin >> accNumber;
                BankAccount *acc = findAccount(accounts, accNumber);
                if (acc != nullptr) 
                {
                    cout << "Enter Withdrawal Amount: ";
                    cin >> amount;
                    acc->withdraw(amount);
                } 
                else 
                {
                    cout << "Account not found." << endl;
                }
                break;
            }
            case 4: 
            {
                int accNumber1, accNumber2;
                double amount;
                cout << "Enter Account Number to transfer from: ";
                cin >> accNumber1;
                BankAccount *acc1 = findAccount(accounts, accNumber1);
                if (acc1 != nullptr) 
                {
                    cout << "Enter Account Number to transfer to: ";
                    cin >> accNumber2;
                    BankAccount *acc2 = findAccount(accounts, accNumber2);
                    if (acc2 != nullptr) 
                    {
                        cout << "Enter Transfer Amount: $";
                        cin >> amount;
                        acc1->transfer(*acc2, amount);
                    } 
                    else 
                    {
                        cout << "Recipient account not found." << endl;
                    }
                } 
                else 
                {
                    cout << "Sender account not found." << endl;
                }
                break;
            }
            case 5:
            {
               
                int accNumber;
                cout << "Enter Account Number: ";
                cin >> accNumber;
                BankAccount *acc = findAccount(accounts, accNumber);
                if (acc != nullptr)
                {
                    acc->display();
                } else 
                {
                    cout << "Account not found." << endl;
                }
                break;
            }
            case 6: 
            {
                
                cout << "Exiting the Bank Management System. Goodbye!" << endl;
                break;
            }
            default:
                cout << "Invalid choice. Please enter a number between 1 and 6." << endl;
        }

    } while (choice != 6);

    return 0;
}