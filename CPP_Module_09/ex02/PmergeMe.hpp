/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:04:22 by mtemel            #+#    #+#             */
/*   Updated: 2023/03/31 16:09:19 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& copy);
		PmergeMe operator = (const PmergeMe& copy);
		~PmergeMe();

		int argErrorHandler(int argc, char **argv);

		int total_vector;
		std::vector<int> vector;

		void	addVector(char **argv, std::vector<int> *pvector);
		void	printVec(std::vector<int> &pvector);
		void	mergesortVec(std::vector<int> &pvector, int left, int right);
		void	merge_vec(std::vector<int> &pvec, int left, int mid, int right);

		int total_deque;
		std::deque<int> deque;

		void	addDeque(char **argv, std::deque<int> *pdeque);
		void	printDeque(std::deque<int> &pdeque);
		void	mergesortDeque(std::deque<int> &pdeque, int left, int right);
		void	merge_deque(std::deque<int> &pdeque, int left, int mid, int right);
};

