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

void PrintNumbersBetween(int start, int end)
{

}

int main()
{
	SumNumbersFrom(50,100); //Task 1.9
	system("pause");

	DecrementNumbers(); //Task 1.10
	system("pause");

	PrintNumbersBetween(1,30); //Task 1.11

	return 0;
}