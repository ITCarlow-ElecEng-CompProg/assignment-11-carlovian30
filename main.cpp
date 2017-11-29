/** Kevin Griffin
    Lab-11
    Tomorrows Date Calculator
*/

/** Preprocessor directives */
#include <iostream>
#include <iomanip>
/** allows getchar() */
#include <cstdio>
/** allows system(cls) */
#include <windows.h>
#include <math.h>

/** Enables cout, cin and endl */
using namespace std;

/** Declaring structure containing day, month and year */
struct date
{
    int day ;
    int month ;
    int year ;
};
/** Main function */
int main()
{
    /**Intialising number of days of everymonth*/
    int monthlength [12] = {31, 28, 31, 30, 30, 30, 31, 31, 30, 31, 30, 31};
    /**structures grouped together*/
    struct date today, tomorrow;
    /**prompts the user to enter todays date*/
    cout << "Enter Todays Date\n\n" ;
    /**displays todays day and stores it in locations todays day*/
    cout << "Day :\t" ;
    cin >> today.day ;
    /**displays the month*/
    cout << "Month :\t" ;
    cin >> today.month;
    /**displays the year to the user and stores it in location today year*/
    cout << "Year :\t" ;
    cin >> today.year;
    /**dipslays todays date to the user*/
    cout << "\n\nTodays Date is :\t" << today.day << "/" << today.month << "/" << today.year << endl;

    /** if statement to check */
    if(today.year % 4 == 0)
    {
        if(today.year % 100 == 0)
        {
            if(today.year % 400 == 0)
            {
                monthlength[1] = 29;
            }
        }
        else
        {
            monthlength[1] = 29;
        }
    }

    if(today.day >= monthlength[today.month -1])
    {
        if (today.month == 12)
        {
            tomorrow.day = 1;
            tomorrow.month = 1;
            tomorrow.year = today.year + 1;
        }
        else
        {
            tomorrow.day = 1;
            tomorrow.month = today.month + 1;
            tomorrow.year = today.year;
        }
    }
    else
    {
        tomorrow.day = today.day +1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }


    /**displays tommorrows date*/
    cout << "\n\nTomorrows Date is :\t" << tomorrow.day << "/" << tomorrow.month << "/" << tomorrow.year << endl;


    return 0;
}
