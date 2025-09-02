// Implement enums to represent days of the week and use them in a switch.

#include <iostream>
using namespace std;

int main()
{
    int start; // starting day from which month start
    int date;  // the date whose day you want to calculate
    enum Day
    {
        Sunday = 1,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };
    cout << "Enter starting day of month(Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7):\t";
    cin >> start; // Taking start day
    cout << "Enter today date:\t";
    cin >> date; // Taking today day

    int dayNumber = (start + (date - 1)) % 7; //
    //  start: the first day of the month (1 = Sunday, 2 = Monday, … 7 = Saturday).
    //  date: today’s date (like 1, 2, 3, … 31).
    //  (date - 1): because the 1st day of the month is already start. If today is the 1st, no shift is needed, so we     subtract 1.
    //  Adding (date - 1) shifts from the first day.
    //  Taking % 7 keeps it within 7 days cycle (since after Saturday comes Sunday again).

    if (dayNumber == 0)
    {
        dayNumber = 7;
        //  % 7 can sometimes give 0.
        // But our days are numbered 1 to 7 (not 0).
        // So if dayNumber == 0, we make it 7 (Saturday).
    }

    Day today = static_cast<Day>(dayNumber);
    // But dayNumber is just an integer (1–7).
    // We need to convert (cast) it to the Day enum type
    switch (today)
    {
    case Sunday:
        cout << "Today is Sunday" << endl;
        break;
    case Monday:
        cout << "Today is Monday" << endl;
        break;
    case Tuesday:
        cout << "Today is Tuesday" << endl;
        break;
    case Wednesday:
        cout << "Today is Wednesday" << endl;
        break;
    case Thursday:
        cout << "Today is Thursday" << endl;
        break;
    case Friday:
        cout << "Today is Friday" << endl;
        break;
    case Saturday:
        cout << "Today is Saturday" << endl;
    default:
        break;
    }
    return 0;
}