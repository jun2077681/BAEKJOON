#include <iostream>

int main(void)
{
    int a, b;
    int date = 0;
    std::cin >> b >> a;
    for (int i = 1; i <= a - 1; i++)
    {
        date += 30;
        if ((i == 1) || (i == 3) || (i == 5) || (i == 7) || (i == 8) || (i == 10) || (i == 12))
        {
            date += 1;
        }
        if (i == 2)
        {
            date -= 2;
        }
    }
    date += (b - 1);
    date += 3;
    switch (date % 7)
    {
    case 0:
        std::cout << "Monday";
        break;
    case 1:
        std::cout << "Tuesday";
        break;
    case 2:
        std::cout << "Wednesday";
        break;
    case 3:
        std::cout << "Thursday";
        break;
    case 4:
        std::cout << "Friday";
        break;
    case 5:
        std::cout << "Saturday";
        break;
    case 6:
        std::cout << "Sunday";
        break;
    default:
        break;
    }
}
