#include <iostream>

int main(void)
{
    int a, b;
    int date = 0;
    std::cin >> a >> b;
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
    switch (date % 7)
    {
    case 0:
        std::cout << "MON";
        break;
    case 1:
        std::cout << "TUE";
        break;
    case 2:
        std::cout << "WED";
        break;
    case 3:
        std::cout << "THU";
        break;
    case 4:
        std::cout << "FRI";
        break;
    case 5:
        std::cout << "SAT";
        break;
    case 6:
        std::cout << "SUN";
        break;
    default:
        break;
    }
}
