/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:32:54 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/03/17 16:33:39 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream>
#include <ctime>
#include <vector>
#include <deque>

class PmergeMe
{
	private :
		std::vector<int> v;
		std::vector<std::pair<int, int> > Vector;
		std::vector<int> Main;
		std::vector<int> Pend;
		std::vector<int> Comb;
		

		std::deque<int> d;
		std::deque<std::pair<int , int> > Deque;
		std::deque<int> Main2;
		std::deque<int> Pend2;
		std::deque<int> Comb2;
		
		
		int left;

	public :
		PmergeMe();
		PmergeMe(const PmergeMe & other);
		PmergeMe & operator=(const PmergeMe & other);
		~PmergeMe();
		
		// first container
		void ft_start(int ac, char **av);
		void ft_parsing(int ac, char **av);
		void ft_print_befor(void);
		void ft_make_pairs(void);
		void ft_use_pair_vector(void);
		void ft_merge(std::vector<std::pair<int, int> >& arr, int left, int middle, int right);
		void ft_merge_sort(std::vector<std::pair<int, int> >& arr, int left, int right);
		void ft_start_merging(std::vector<std::pair<int, int> > & Left, std::vector<std::pair<int, int> > & Right, int len1, int len2, int start);
		void ft_create_main_and_pend(void);
		void ft_final_sort();
		void ft_the_combination(size_t size);
		void ft_print_after();
		
		
		void setLeft(int left);
		int  getLeft();
		
		
		

		// second container ---
		void ft_make_pairs_2();
		void ft_use_pair_deque();
		void ft_merge_sort_2(std::deque<std::pair<int, int> > & Deque, int start, int end);
		void ft_merge_2(std::deque<std::pair<int, int> > & Deque, int start, int mid, int end);
		void ft_start_merging_2(std::deque<std::pair<int, int> > & Left, std::deque<std::pair<int, int> > &  Right, int len1, int len2, int start);
		void ft_create_main_and_pend_2(void);
		void ft_final_sort_2();
		void ft_the_combination_2(size_t size);
		void ft_print_time(double delta_t1, double delta_t2);
		
		// remove late
		void ft_print_container(std::vector<int> h);
		void ft_print_vector();
		void ft_print_container_2(std::deque<int> h);
		void ft_print_pair_deque(std::deque<std::pair< int, int> > Deque);

	
};

