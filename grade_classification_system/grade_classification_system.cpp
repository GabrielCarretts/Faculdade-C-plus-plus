#include <iostream>
using namespace std;
int main()

{

    // Colors //
    string const COLOR_CYAN_BOLD = "\033[1;36m";
    string const COLOR_CYAN = "\033[36m";
    string const COLOR_WHITE = "\033[37m";
    string const COLOR_RED = "\033[1;31m";
    string const COLOR_RESET = "\033[0m";
    string const UNDERLINED_TEXT = "\033[4m";

    // Variables //
    int student_grade;
    char student_concept, answer;
    string student_name;

    do
    {
        // Input //
        cout << UNDERLINED_TEXT << COLOR_CYAN_BOLD << "\n\n====> Welcome to the Grade Classification System! <====" << COLOR_RESET << endl;
        cout << COLOR_CYAN << "\nEnter the student's name: " << COLOR_RESET;
        getline(cin, student_name);
        cout << COLOR_CYAN << "Enter the student's grade (0-100): " << COLOR_RESET;
        cin >> student_grade;
        while (student_grade < 0 || student_grade > 100)
        {
            cout << COLOR_RED << "\nInvalid grade! Please enter a number between 0 and 100: " << COLOR_RESET;
            cin >> student_grade;
        }

        // Process //
        if (student_grade <= 39)
        {
            student_concept = 'E';
        }
        else if (student_grade <= 59)
        {
            student_concept = 'D';
        }
        else if (student_grade <= 75)
        {
            student_concept = 'C';
        }
        else if (student_grade <= 89)
        {
            student_concept = 'B';
        }
        else
        {
            student_concept = 'A';
        }

        // Output //
        cout << UNDERLINED_TEXT << COLOR_CYAN_BOLD << "\n\n====> Classification Result <====" << COLOR_RESET << endl;
        cout << COLOR_CYAN << "\nStudent name: " << COLOR_WHITE << student_name << COLOR_RESET;
        cout << COLOR_CYAN << "\nRecorded grade: " << COLOR_WHITE << student_grade << COLOR_RESET;
        cout << COLOR_CYAN << "\nAssigned concept: " << COLOR_WHITE << student_concept << COLOR_RESET;
        cout << COLOR_CYAN_BOLD << "\n\nWould you like to classify another grade? (Y/N) " << COLOR_RESET;
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
