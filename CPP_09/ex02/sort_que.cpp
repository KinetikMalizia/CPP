/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_que.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 16:38:18 by fmalizia          #+#    #+#             */
/*   Updated: 2023/03/30 16:45:54 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void insertion_sort_q(std::deque<int> &array, int l, int r)
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

void merge_q(std::deque<int> &arr, std::deque<int> &temp, int l, int m, int r)
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

void mergesort_q(std::deque<int> &arr, std::deque<int> &temp, int l, int r, int threshold)
{
	if (l < r)
	{
		if ((r - l) <= threshold)
			insertion_sort_q(arr, l, r);
		else
		{
			int m = (l + r) / 2;
			mergesort_q(arr, temp, l, m, threshold);
			mergesort_q(arr, temp, m + 1, r, threshold);
			merge_q(arr, temp, l, m, r);
		}
	}
}