#include <iostream>
#include <string>

int main()
{
	int number;
	std::cout << "input number: ";
	std::cin >> number;
	std::cout << std::endl;
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
	std::cout << "answer = " << answer <<std::endl;
	std::system("pause");
    return 0;
}

