#include <iostream>
#include <iomanip>
using namespace std;
int main()

{

    // Colors //
    string const COLOR_GOLD = "\033[1;33m";
    string const COLOR_CYAN = "\033[36m";
    string const COLOR_RED = "\033[1;31m";
    string const COLOR_RESET = "\033[0m";
    string const UNDERLINED_TEXT = "\033[4m";

    // Variables //
    double service_fee_per_day, lodging_cost, service_cost, total_bill;
    double const daily_rate = 60.00;
    string client_name;
    char answer;
    int days;

    do
    {
        // Input //
        cout << UNDERLINED_TEXT << COLOR_GOLD << "\n\n====> Welcome to the Hotel! <====\n" << COLOR_RESET;
        cout << COLOR_CYAN << "\nEnter your name: " << COLOR_RESET;
        getline(cin, client_name);
        cout << COLOR_CYAN << "Enter the number of days: " << COLOR_RESET;
        cin >> days;
        while (days <= 0)
        {
            cout << COLOR_RED << "\nInvalid value! Please enter a positive number: " << COLOR_RESET;
            cin >> days;
        }

        // Process //
        if (days > 5)
        {
            service_fee_per_day = 5.50;
        }
        else if (days == 5)
        {
            service_fee_per_day = 7.00;
        }
        else
        {
            service_fee_per_day = 9.00;
        }
        lodging_cost = daily_rate * days;
        service_cost = service_fee_per_day * days;
        total_bill = lodging_cost + service_cost;

        // Output //
        cout << fixed << setprecision(2);
        cout << UNDERLINED_TEXT << COLOR_GOLD << "\n\n====> " << client_name << " <====" << COLOR_RESET << endl;
        cout << COLOR_CYAN << "\nDuration of stay: " << days << " days" << COLOR_RESET;
        cout << "\nService fee per day: $ " << service_fee_per_day << COLOR_RESET;
        cout << "\nLodging cost: $ " << lodging_cost << COLOR_RESET;
        cout << "\nService cost: $ " << service_cost << COLOR_RESET;
        cout << COLOR_GOLD << "\nTotal bill amount: $ " << total_bill << COLOR_RESET;
        cout << COLOR_GOLD << "\n\nWould you like to calculate another bill? (Y/N) " << COLOR_RESET;
        cin >> answer;
        while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N')
        {
            cout << COLOR_RED << "\nInvalid option! Please type Y or N: " << COLOR_RESET;
            cin >> answer;
        }

        cin.ignore();
    } while (answer == 'y' || answer == 'Y');

    system("pause");
    return 0;
}