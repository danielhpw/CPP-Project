#include <iostream>
#include <iomanip>
using namespace std;

bool getInput(int& hours, int& minutes);
void convertTime(int& hours, int& minutes, char& am_pm);
void displayTime(int hours, int minutes, char am_pm);

int main() 
{
    int hours, minutes;
    char am_pm, repeat;

    do 
    {
        if (getInput(hours, minutes)) 
        {
            convertTime(hours, minutes, am_pm);
            displayTime(hours, minutes, am_pm);
        }
        else 
        {
            cout << "Invalid input. Please enter a correct 24-hour format time (00-23 for hours and 00-59 for minutes)." << endl;
        }

        cout << "Do you want to convert another time? (y/n): ";
        cin >> repeat;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } 
    while (repeat == 'y' || repeat == 'Y');

    system("pause");
    return 0;
}

bool getInput(int& hours, int& minutes) 
{
    cout << "Enter time in 24-hour notation (hh mm): ";
    cin >> hours >> minutes;

    if (cin.fail()) 
    {
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        return false;
    }

    return hours >= 0 && hours < 24 && minutes >= 0 && minutes < 60;
}

void convertTime(int& hours, int& minutes, char& am_pm) 
{
    am_pm = (hours < 12) ? 'a' : 'p';
    if (hours == 0) 
    {
        hours = 12; 
    }
    else if (hours == 12) 
    {
        am_pm = 'p'; 
    }
    else if (hours > 12) 
    {
        hours -= 12;
    }
}

void displayTime(int hours, int minutes, char am_pm) 
{
    cout << "The time in 12-hour notation is: "
        << setfill('0') << setw(2) << hours << ":"
        << setfill('0') << setw(2) << minutes << " "
        << (am_pm == 'a' ? "A.M." : "P.M.") << endl;
}