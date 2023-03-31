/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:14:43 by mtemel            #+#    #+#             */
/*   Updated: 2023/03/31 16:14:59 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	this->total_deque = 0;
	this->total_vector = 0;
}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& copy)
{
	*this = copy;
}

PmergeMe PmergeMe::operator = (PmergeMe const&)
{
	return (*this);
}

int PmergeMe::argErrorHandler(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cerr << "\033[1;31mArgument error!\033[0m" << std::endl;
		return (1);
	}
	int i = 1;
	int j = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				std::cerr << "\033[1;31mInvalid number! Enter only positive integer!\033[0m" << std::endl;
				return(1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	PmergeMe::addVector(char **argv, std::vector<int> *pvector)
{
	int i = 0;
	while (argv[i])
	{
		pvector->push_back(std::atoi(argv[i]));
		this->total_vector++;
		i++;
	}
}

void	PmergeMe::printVec(std::vector<int> &pvector)
{
	std::vector<int>::iterator it;

	it = pvector.begin();
	while (it != pvector.end())
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
}

void	PmergeMe::mergesortVec(std::vector<int> &pvector, int left, int right)
{
	if (left >= right)
		return;
	int	mid = left + (right - left) / 2;
	this->mergesortVec(pvector, left, mid);
	this->mergesortVec(pvector, mid + 1, right);
	this->merge_vec(pvector, left, mid , right);
}

void	PmergeMe::merge_vec(std::vector<int> &pvec, int left, int mid, int right)
{
	int n1 = mid - left + 1; // sol alt dizi boyutu
	int n2 = right - mid; // sağ alt dizi boyutu
	int tempL[n1];
	int tempR[n2];

	for (int i = 0; i < n1; i++)
		tempL[i] = pvec[left + i];
	for (int j = 0; j < n2; j++)
		tempR[j] = pvec[mid + j + 1];

	int i = 0;
	int j = 0;
	int k = left;

	while (i < n1 && j < n2) // sol ve sağdan daha küçüğünü ana diziye kopyala
	{
		if (tempL[i] <= tempR[j])
		{
			pvec[k] = tempL[i];
			i++;
		}
		else
		{
			pvec[k] = tempR[j];
			j++;
		}
		k++;
	}

	while (i < n1) //sol alt dizideki elemanları ana diziye kopyala.
	{
		pvec[k] = tempL[i];
		i++;
		k++;
	}

	while (j < n2) // sağ alt dizideki elemanları ana diziye kopyala
	{
		pvec[k] = tempR[j];
		j++;
		k++;
	}
}

void	PmergeMe::addDeque(char **argv, std::deque<int> *pdeque)
{
	int i = 0;
	while (argv[i])
	{
		pdeque->push_back(std::stoi(argv[i]));
		this->total_deque++;
		i++;
	}
}

void	PmergeMe::printDeque(std::deque<int> &pdeque)
{
	std::deque<int>::iterator it;

	it = pdeque.begin();
	while (it != pdeque.end())
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
}

void	PmergeMe::mergesortDeque(std::deque<int> &pdeque, int left, int right)
{
	if (left >= right)
		return;
	int	mid = left + (right - left) / 2;
	this->mergesortDeque(pdeque, left, mid);
	this->mergesortDeque(pdeque, mid + 1, right);
	this->merge_deque(pdeque, left, mid, right);
}

void PmergeMe::merge_deque(std::deque<int> &pdeque, int left, int mid, int right)
{
	int n1 = mid - left + 1; // sol alt dizi boyutu
	int n2 = right - mid; // sağ alt dizi boyutu
	int tempL[n1];
	int tempR[n2];

	for (int i = 0; i < n1; i++)
		tempL[i] = pdeque[left + i];
	for (int j = 0; j < n2; j++)
		tempR[j] = pdeque[mid + j + 1];

	int i = 0;
	int j = 0;
	int k = left;

	while (i < n1 && j < n2) // sol ve sağdan daha küçüğünü ana diziye kopyala
	{
		if (tempL[i] <= tempR[j])
		{
			pdeque[k] = tempL[i];
			i++;
		}
		else
		{
			pdeque[k] = tempR[j];
			j++;
		}
		k++;
	}

	while (i < n1) //sol alt dizideki elemanları ana diziye kopyala.
	{
		pdeque[k] = tempL[i];
		i++;
		k++;
	}

	while (j < n2) // sağ alt dizideki elemanları ana diziye kopyala
	{
		pdeque[k] = tempR[j];
		j++;
		k++;
	}
}