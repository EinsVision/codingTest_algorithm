#include "algorithm.h"

void Sorting::vectorExample()
{
	std::vector<int> vec;
	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
	}

	int count = 0;
	count = (int)vec.size();
	std::cout << "count =  " << count << std::endl;
	std::cout << "Values stored are: " << std::endl;

	for (auto i : vec)
	{
		std::cout << vec[i] << " ";
	}

	std::cout << "vector step 1: " << std::endl;
	vec.pop_back();
	for (auto i : vec)
	{
		std::cout << vec[i] << " ";
	}

	std::cout << "vector step 2: " << std::endl;
	vec.pop_back();
	for (auto i : vec)
	{
		std::cout << vec[i] << " ";
	}
}

void Sorting::listExample()
{
	std::list<int> li;
	li.push_front(1);
	li.push_back(3);

	li.push_back(5);
	li.push_front(2);
	
	for (auto i : li)
	{		
		std::cout << i << " ";
	}
	std::cout << "" << std::endl;

	li.pop_front();
	li.pop_back();

	for (auto i : li)
	{
		std::cout << i << " ";
	}
	std::cout << "" << std::endl;
	
}