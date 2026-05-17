#include <iostream>
using namespace std;

int main()
{
    // Colors //
    string const COLOR_CYAN = "\033[1;36m";
    string const COLOR_YELLOW = "\033[1;33m";
    string const COLOR_GREEN = "\033[1;32m";
    string const COLOR_MAGENTA = "\033[1;35m";
    string const COLOR_RED = "\033[1;31m";
    string const UNDERLINED_TEXT = "\033[4m";
    string const COLOR_RESET = "\033[0m";

    // Variables //
    string name;
    char gender, answer;
    int totalMen = 0, totalWomen = 0;

    do
    {
        totalMen = 0;
        totalWomen = 0;

        // Input //
        cout << COLOR_MAGENTA << "\n\n====>" << COLOR_CYAN << " Welcome to the Person Census! " << COLOR_MAGENTA << "<====" << endl << COLOR_RESET;

        // Process //
        for (int i = 1; i <= 10; i++)
        {
            cout << COLOR_YELLOW << "\nEnter the name of the person: " << COLOR_RESET;
            getline(cin, name);
            cout << COLOR_YELLOW << "Enter the gender of the person (M - Male, F - Female): " << COLOR_RESET;
            cin >> gender;
            cin.ignore();
            while (gender != 'm' && gender != 'M' && gender != 'f' && gender != 'F')
            {
                cout << COLOR_RED << "\nInvalid option! Please type M or F: " << COLOR_RESET;
                cin >> gender;
            }
            if (gender == 'M' || gender == 'm')
            {
                totalMen++;
            }
            else
            {
                totalWomen++;
            }
        }

        // Output //
        cout << COLOR_MAGENTA << "\n\n====>" << COLOR_CYAN << " Census Result: " << COLOR_MAGENTA << "<====" << endl << COLOR_RESET;
        cout << COLOR_GREEN << "\nTotal Men: " << totalMen << COLOR_RESET;
        cout << COLOR_GREEN << "\nTotal Women: " << totalWomen << COLOR_RESET;
        cout << COLOR_YELLOW << "\n\nWould you like to calculate more people? (Y/N) " << COLOR_RESET;
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