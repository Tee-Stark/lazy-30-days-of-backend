#include <bits/stdc++.h>

std::vector<int> getNLeapYears(int, int);

int main()
{
    int year, n;

    std::cout << "Hi! I'm about to show you the next N leap years from year X..." << std::endl;
    std::cout << "Enter the year: ";

    std::cin >> year;

    std::cout << "Enter the number of years you want to see: ";
    std::cin >> n;

    std::vector<int> leap_years = getNLeapYears(year, n);

    for (int yr : leap_years)
    {
        std::cout << yr << std::endl;
    }

    return 0;
}

std::vector<int> getNLeapYears(int year, int n)
{
    std::vector<int> years = {};
    int ly = year;
    for (int i = 0; i < n; i++)
    {
        if (ly % 4 == 0 && ly % 100 != 0 || ly % 400 == 0)
        {
            years.push_back(ly);
            ly += 4;
        }
        else
        {
            ly++;
            i--;
        }
    }
    return years;
}
