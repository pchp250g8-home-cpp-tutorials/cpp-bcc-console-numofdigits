#include <iostream>
#include <tchar.h>
#include <math.h>
#include <stdlib.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int iNum, iVal, iNumDigits;
    system("cls");
    std::cout << "Input an integer number\r\n";
    std::cin >> iNum;
    iVal = abs(iNum); iNumDigits = 0;
    while (iVal > 0)
    {
        iVal /= 10;
        iNumDigits++;
    }
    std::cout << "The number " << iNum << " has " << iNumDigits
    		  << " digit(s)\r\n";
    std::cin.ignore();
    std::cin.get();
}
