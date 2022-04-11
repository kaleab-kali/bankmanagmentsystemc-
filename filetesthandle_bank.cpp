//banking management system
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>
#include <string>
#include <cmath>
#include <cstdlib>
#include "banking_link_test.h"

using namespace std;

//function that are used in this program
void welcome();
int task_choice();
void create_account();
void deposit();
void withdrawl();
void check_balance();
void credit(vector<client_info> &user);
void pay_loan(vector<client_info> &user);
void modify(vector<client_info> &user);

void transfer_money();
void print_user_info(const vector<client_info> user);
void close_account(vector<client_info> &user);
bool account_checker(int accno, int *user_check);

//functions used for adminstrators access
void admin();
void total_transaction();
void customer_list(vector<client_info> &user);
void multi_stati(vector<client_info> user);
void sort(vector<client_info> &user);
bool compare(client_info user1,client_info user2);

int main()
{
    int choice;
    bool isDone = true;
    while (isDone)
    {
        system("cls");
        welcome();
        choice = task_choice();
        switch (choice)
        {
        case 1:
            create_account();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdrawl();
            break;
        case 4:
            check_balance();
            break;
        case 5:
            close_account(user);
            break;
        case 6:
            transfer_money();
            break;
        case 7:
            print_user_info(user);
            break;
        case 8:
            modify(user);
            break;
        case 9:
            credit(user);
            break;
        case 10:
            pay_loan(user);
            break;
        case 11:
            admin();
            break;
        case 12:
            isDone = false;
            break;

        }
    }
    return 0;
}
