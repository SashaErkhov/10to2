#include "stdafx.h"
#include <iostream>
//#include <string>
#include <cmath>

int main()
{
	int number;
	std::cout << "input number: ";
	std::cin >> number;
	std::cout << std::endl;
	int count = 0;
	int answer;
	for (int i = 31;i != -1;--i)
	{
		if (pow(2, i) <= number)
		{
			std::cout << "1";
			count = 1;
			number -= pow(2, i);
		}
		else if (count == 0)
		{
			//pass
		}
		else
		{
			std::cout << "0";
		}
	}
	std::cout << std::endl;



	/*
	std::string answer;
	while (number != 0)
	{
		if (number % 2 == 0)
		{
			answer = answer + '1';
			number /= 2;
		}
		else
		{
			answer = answer + '0';
			number /= 2;
		}
	}
	*/
	//std::cout << "answer = " << answer <<std::endl;
	std::system("pause");
    return 0;
}

