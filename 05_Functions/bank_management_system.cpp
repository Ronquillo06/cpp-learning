#include <iostream>
#include <vector>


using namespace std;

void showMenu()
{
    cout << "\n";
    cout << "========== BANK MENU ==========\n";
    cout << "1. Deposit Money\n";
    cout << "2. Withdraw Money\n";
    cout << "3. Show Balance\n";
    cout << "4. Show Transaction History\n";
    cout << "5. Search Transaction\n";
    cout << "6. Delete Last Transaction\n";
    cout << "7. Exit\n";
    cout << "\n";
    cout << "Enter choice: ";
}

void depositMoney(vector<double>& transactions)
{
    double amount = 0;

    cout << "Enter Amount to Deposit: ";
    cin >> amount;
    
    if (amount <= 0)
    {
        cout << "Invalid Input\n";
    }
    else
    {
    transactions.push_back(amount);

    cout << "Deposit successfull!\n";
    cout << "The Amount You Deposit: " << amount << "\n";
    cout << "\n";
    }
}

void withdrawMoney(vector<double>& transactions)
{
    if (transactions.empty())
    {
        cout << "You have no funds to withdraw from!\n";
        return;
    }

    double amount = 0;
    cout << "Enter Amount to Withdraw: ";
    cin >> amount;

    if (amount <= 0)
    {
        cout << "Invalid amount.\n";
        return;
    } 

    double currentBal = 0;
    for (int i = 0; i < transactions.size(); i++)
    {
        currentBal += transactions[i];
    }

    if (amount > currentBal)
    {
        cout << "\n";
        cout << "Don't have Enough Balance!\n";

        return;
    }

    transactions.push_back(-amount);
    cout << "\n";
    cout << "Withdrawal successful!\n";
    cout << "Amount withdraw: " << amount << "\n"; 
}

double showBalance(vector<double>& transactions)
{
    if (transactions.empty())
    {
        return 0;
    }

    double balance = 0;

    for (int i = 0; i < transactions.size(); i++)
    {
        balance += transactions[i];
    }

    return balance;
}

void showTransactionHistory(vector<double>& transactions)
{
    if (transactions.empty())
    {
        cout << "You currently have no transactions\n";
        return;
    }

    cout << "Transaction History: \n";

    for (int i = 0; i < transactions.size(); i++)
    {
        cout << "Transaction " << (i + 1) << ": "<< transactions[i] << "\n";
    }
}

void searchTransaction(vector<double>& transactions)
{
    if (transactions.empty())
    {
        cout << "You currently have no transactions\n";
        return;
    }

    bool found = false;
    int count = 0;

    double search;

    cout << "Enter searching transaction amount: ";
    cin >> search;

    for (int i = 0; i < transactions.size(); i++)
    {
        if (search == transactions[i])
        {
            found = true;
            count++;
        }
    }

    if (found == true)
    {
        cout << "Transaction Found!\n";
        cout << count << " Found!\n";
    }
    else
    {
        cout << "Transaction Not Found!\n";
    }
}

void deleteLastTransac(vector<double>& transactions)
{
    if (transactions.empty())
    {
        cout << "No transactions to delete\n";
        return;
    }

    transactions.pop_back();
    cout << "Last transaction is deleted!\n";
    
}



int main()
{
    vector<double> transactions;
    int choice;

    do
    {
        showMenu();
        cin >> choice;

        if (choice == 1)
        {
            depositMoney(transactions);
        }
        else if (choice == 2)
        {
            withdrawMoney(transactions);
            cout << "Remaining Balance: " << showBalance(transactions);
        }
        else if (choice == 3)
        {
            if (transactions.empty())
            {
                cout << "Don't have Balance!\n";
            }
            else
            {
                cout << "Balance: ";
                cout << showBalance(transactions);
                cout << "\n";
            }
            
        }
        else if (choice == 4)
        {
            showTransactionHistory(transactions);
        } 
        else if (choice == 5) 
        {
            searchTransaction(transactions);
        }
        else if (choice == 6)
        {
            deleteLastTransac(transactions);
        }
        else if (choice == 7)
        {
            cout << "Goodbye!\n";
        }
        else
        {
            cout << "\n";
            cout << "Invalid Input!\n";
        }
    }
    while (choice != 7);



    return 0;
}