/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:17:08 by fmalizia          #+#    #+#             */
/*   Updated: 2023/03/30 15:50:51 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void insertion_sort(std::vector<int>&array, int l, int r)
{
	for (int i = l; i <= r; i++)
	{
		double tmp = array[i];
		int j = i;
		while ((j > l) && (array[j - 1] > tmp))
		{
			array[j] = array[j - 1];
			j--;
		}
		array[j] = tmp;
	}
}

void merge(std::vector<int> &arr, std::vector<int> &temp, int l, int m, int r)
{
	int i = l;
	int j = m + 1;
	int k = l;
	while ((i <= m) && (j <= r))
	{
		if (arr[i] < arr[j])
		{
			temp[k] = arr[i];
			i++;
		}
		else
		{
			temp[k] = arr[j];
			j++;
		}
		k++;
	}

		for (; j <= r; j++, k++)
			temp[k] = arr[j];

		for (; i <= m; i++, k++)
			temp[k] = arr[i];

		for (i = l; i <= r; i++)
			arr[i] = temp[i];
}

void mergesort(std::vector<int> &arr, std::vector<int> &temp, int l, int r, int threshold)
{
	if (l < r)
	{
		if ((r - l) <= threshold)
			insertion_sort(arr, l, r);
		else
		{
			int m = (l + r) / 2;
			mergesort(arr, temp, l, m, threshold);
			mergesort(arr, temp, m + 1, r, threshold);
			merge(arr, temp, l, m, r);
		}
	}
}

// int main()
// {
// 	double array[100] = {12, 4, 7, 88, 3, 0};
// 	std::vector<int>	vec;
// 	vec.push_back(12);
// 	vec.push_back(4);
// 	vec.push_back(7);
// 	vec.push_back(88);
// 	vec.push_back(3);
// 	vec.push_back(0);
// 	// for(int i = 0;i<100;i++)
// 	// 	array[i] = std::rand() % 100 +1;

// 	for (int i = 0; i < 6; ++i)
// 		std::cout << vec[i] << " ";
// 	std::cout << std::endl;
// 	double * temp = new double[100];
// 	std::vector<int> *temp_vec = new std::vector<int>(20);
// 	// temp_vec.push_back(0);
// 	// temp_vec.push_back(0);
// 	// temp_vec.push_back(0);
// 	// temp_vec.push_back(0);
// 	// temp_vec.push_back(0);
// 	// temp_vec.push_back(0);
// 	mergesort(vec,*temp_vec, 0, 5,3);
// 	for (int i = 0; i < 6; ++i)
// 		std::cout << vec[i] << " ";
// 	std::cout << std::endl;
// 	delete[] temp;

// 	return 0;
// }