#include <iostream>

void SumNumbersFrom(int start, int end)
{
	if (start >= end)
	{
		std::cout << "Ending number is less than Starting one." << std::endl;
		return;
	}

	int sum = 0, val = start;
	while (val <= end)
	{
		sum += val;
		++val;
	}

	std::cout << "Sum of " << start << " to " << end << " is " << sum << std::endl;

}

void DecrementNumbers()
{
	int value = 10;
	while (value >= 0)
	{
		std::cout << value<<std::endl;
		--value;
	}
}

void PrintNumbersBetween()
{
	std::cout << "Please input two integers." << std::endl;

	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;

	int start = v1, end = v2;
	if (v1 > v2)
	{
		start = v2;
		end = v1;
	}

	int val = start;
	while (val <= end)
	{
		std::cout << val << std::endl;
		++val;
	}
}

int main()
{
	SumNumbersFrom(50,100); //Task 1.9
	system("pause");

	DecrementNumbers(); //Task 1.10
	system("pause");

	PrintNumbersBetween(); //Task 1.11

	return 0;
}