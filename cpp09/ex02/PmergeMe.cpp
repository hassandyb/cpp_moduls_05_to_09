/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:32:42 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/03/17 17:30:50 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// Canonical from : --------------------


PmergeMe::PmergeMe() {};
PmergeMe::PmergeMe(const PmergeMe & other) { *this = other; };
PmergeMe & PmergeMe::operator=(const PmergeMe & other)
{
	if(this != &other)
	{
		this->v = other.v;
		this->Vector = other.Vector;
		this->Main = other.Main;
		this->Pend = other.Pend;
		this->Comb = other.Comb;
		
		this->d = other.d;
		this->Deque = other.Deque;
		this->Main2 = other.Main2;
		this->Pend2 = other.Pend2;
		this->Comb2 = other.Comb2;

		this->left = other.left;
	}
	return *this;
};
PmergeMe::~PmergeMe() {};


// Debuging tools : -------------------

void PmergeMe::ft_print_container(std::vector<int> h)
{
	std::cout << std::endl;
	if(h.empty() == true)
		std::cout << "Empty container..." << std::endl;
		
	
	for(size_t i = 0; i < h.size(); i++)
		std::cout << h[i] << " ";
	std::cout << std::endl;
}

void PmergeMe::ft_print_vector()
{
	std::cout << std::endl << std::endl; 
	for(size_t i = 0; i < Vector.size(); i++)
		std::cout << Vector[i].first << "  ";
	std::cout << std::endl;
	for(size_t i = 0; i < Vector.size(); i++)
		std::cout << Vector[i].second << "  ";
	std::cout << std::endl << std::endl; 
}

void PmergeMe::ft_print_container_2(std::deque<int> h)
{
	for(size_t i = 0; i < h.size(); i++)
		std::cout << h[i] << " ";
	std::cout << std::endl;
}

void PmergeMe::ft_print_pair_deque(std::deque<std::pair< int, int> > Deque)
{
	std::cout << std::endl;
	for(size_t i = 0; i < Deque.size() ; i++)
		std::cout <<  Deque[i].first << " ";
	std::cout << std::endl;
	for(size_t i = 0; i < Deque.size() ; i++)
		std::cout <<  Deque[i].second << " ";
	std::cout << std::endl;
}

//getters / setters :  --------------

void PmergeMe::setLeft(int left) 
{
	 this->left = left;
}

int  PmergeMe::getLeft() 
{
	return this->left;
}
		
// Prasing  : --------------------

void ft_error(std::string msg)
{
	std::cerr << "Error : " << msg << std::endl;
	exit (1);
}

void ft_just_numbers(char *arg)
{
	int i = -1;
	while(arg[++i])
	{
		if(std::isdigit(arg[i]) == true)
			continue;
		else if(arg[i] == '-' || arg[i] == '+')
			continue;
		else
			ft_error("Please enter numbers only!");
	}
}

void PmergeMe::ft_parsing(int ac, char **av)
{
	int i = 1;
	int nbr;
	if(ac == 1)
		ft_error("No arguments!");
	while(av[i])
	{
		ft_just_numbers(av[i]);
		nbr = atoi(av[i]);
		if(nbr < 0)
			ft_error("Found a nigative nummber.");
		this->v.push_back(nbr);
		this->d.push_back(nbr); // we should push to the second container too.
		i++;
	}
	if(v.size() <= 1)
		ft_error("We can't sort one element.");
}

void PmergeMe::ft_print_befor(void)
{
	std::cout << "Before:  ";
	std::vector<int>::iterator it;
	for(it = v.begin(); it != v.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

// The first container : --------------------------------------------------------------------

void PmergeMe::ft_make_pairs()
{
	
	if(this->v.size() % 2 != 0)// we have impair number
	{

		this->left = this->v.back();
		this->v.pop_back();
	}
	else
		this->left = -1;

	int tmp;
	for(size_t i = 0; i < v.size() - 1; i++)
	{
		if(i % 2 == 0)// access  the first element of the pairs
		{
			if(v[i] < v[i + 1])
			{
				tmp = v[i];
				v[i] = v[i + 1];
				v[i + 1] = tmp;
				
			}
		}

	}

}

void PmergeMe::ft_use_pair_vector(void)
{
	for(size_t i = 0; i < v.size() - 1; i++)
	{
		if(i % 2 == 0)
			Vector.push_back(std::make_pair(v[i], v[i + 1]));
	}
}

void PmergeMe::ft_start_merging(std::vector<std::pair<int, int> > & Left, std::vector<std::pair<int, int> > & Right, int len1, int len2, int start)
{
	int i = 0, j = 0, count = start;
	
	while(i < len1 && j < len2)
	{
		if(Left[i].first <= Right[j].first)
		{
			Vector[count] = Left[i];
			i++;
		}
		else
		{
			Vector[count] = Right[j];
			j++;
		}
		count++;
	}
	
	while(i < len1)
	{
		Vector[count] = Left[i];
		i++;
		count++;
	}
	
	while(j < len2)
	{
		Vector[count] = Right[j];
		j++;
		count++;
	}
}

void PmergeMe::ft_merge(std::vector<std::pair<int, int> > & Vector, int start, int mid, int end)
{
	if(start == mid && mid == end)// one single ement !!! no need to sort it .
		return;
		
	// we are going to change Vector so lets copy it content to two tem vectors;
	int len1 = mid - start + 1;
	int len2 = end - mid;
	
	std::vector<std::pair<int, int> > Left(len1);
	std::vector<std::pair<int, int> > Right(len2);
	
	for(int i = 0; i < len1; i++)
		Left[i] = Vector[start + i];
	for(int i = 0; i < len2; i++)
		Right[i] = Vector[(mid + 1) + i];// mid is the indice of teh end of left , so we add one
	
	// lets now merege Vector ...

	ft_start_merging(Left, Right, len1, len2, start);
}

void PmergeMe::ft_merge_sort(std::vector<std::pair<int , int> > & Vector, int start, int end)
{
	if(start < end )// onec end = start emans we gen reached single elements
	{
		int mid = start + (end - start) / 2;

		ft_merge_sort(Vector, start, mid);
		ft_merge_sort(Vector, mid + 1, end);
		ft_merge(Vector, start, mid, end);
	}
}

void PmergeMe::ft_create_main_and_pend(void)
{
	std::vector<std::pair<int, int> >::iterator it;

	for(it = Vector.begin(); it != Vector.end(); it++)
	{
		if(it == Vector.begin())
		{
			Main.push_back(it->second);// pend numbers exist in second
			Main.push_back(it->first);// mian numbers exit in first
			
			Pend.push_back(it->second);
			continue;
		}
		Main.push_back(it->first);
		Pend.push_back(it->second);
		
	}
}

void PmergeMe::ft_the_combination(size_t size)
{
	std::vector<int> Jacob;
	Jacob.push_back(0);
	Jacob.push_back(1);
	for(size_t i = 2; i < 20; i++)
		Jacob.push_back(Jacob[i -1] + ( 2 * Jacob[i - 2]));
	Jacob.erase(Jacob.begin() + 1);
	
	Comb.push_back(0);
	

	for(int i = 1; i < 20 ; i++)
	{
		Comb.push_back(Jacob[i]);
		for(int j = Jacob[i - 1] + 1; j < Jacob[i]; j++)
		{
			Comb.push_back(j);

		}
		if(Comb.size() >= size)
			break;
	}
}

void PmergeMe::ft_final_sort()
{
	ft_the_combination(Pend.size());
	int indice;

	std::vector<int>::iterator it;
	for(size_t i = 1; i < Comb.size(); i++)
	{
		indice = Comb[i];
		if(indice >= (int)Pend.size())
			continue;
		it = std::lower_bound(Main.begin(), Main.end(), Pend[indice]);
		Main.insert(it, Pend[indice]);
	}
	if(this->left != -1)
	{
		it = std::lower_bound(Main.begin(), Main.end(), this->left);
		Main.insert(it, this->left);
	}
}

void PmergeMe::ft_print_after()
{
	
	std::cout << "After:   ";
	
	for(size_t i = 0; i < Main.size(); i++)
		std::cout << Main[i] << " ";
	std::cout << std::endl;
}


// The second container : --------------------------------------------------------------------

void PmergeMe::ft_make_pairs_2()
{
	if (this->d.size() % 2 != 0)// we have impair numbers 
	{
		this->left = this->d.back();
		this->d.pop_back();
	}
	else
		this->left = -1;
	int tmp;
	for(size_t i = 0; i < d.size() ; i++)
	{
		if(i % 2 == 0)
		{
			if(d[i] < d[i + 1])
			{
				tmp = d[i];
				d[i] = d[i + 1];
				d[i + 1] = tmp;
			}
		}
	}
}

void PmergeMe::ft_use_pair_deque()
{
	for(size_t i = 0; i < d.size() - 1 ; i++)
	{
		if(i % 2 == 0)
			Deque.push_back(std::make_pair(d[i], d[i + 1]));
	}
}

void PmergeMe::ft_start_merging_2(std::deque<std::pair<int, int> > & Left, std::deque<std::pair<int, int> > &  Right, int len1, int len2, int start)
{
	int i = 0, j = 0, count = start;
	
	while(i < len1 && j < len2)
	{
		if(Left[i].first <= Right[j].first)
		{
			Deque[count] = Left[i];
			i++;
		}
		else
		{
			Deque[count] = Right[j];
			j++;
		}
		count++;
	}
	while(i < len1)
	{
		Deque[count] = Left[i];
		i++;
		count++;
	}
	while(j < len2)
	{
		Deque[count] = Right[j];
		j++;
		count++;
	}
}

void PmergeMe::ft_merge_2(std::deque<std::pair<int, int> > & Deque, int start, int mid, int end)
{
	if(start == mid && mid == end)
		return;
	
	int len1 = mid - start + 1;
	int len2 = end - mid;

	std::deque<std::pair<int, int> > Left(len1);
	std::deque<std::pair<int, int> > Right(len2);
	
	for(int i = 0; i < len1; i++)
		Left[i] = Deque[start + i];
	for(int i = 0; i < len2; i++)
		Right[i] = Deque[(mid + 1) + i];
		
		
	ft_start_merging_2(Left, Right, len1, len2, start);
}

void PmergeMe::ft_merge_sort_2(std::deque<std::pair<int, int> > & Deque, int start, int end)
{
	if(start < end)
	{
		int mid = start + (end - start) / 2;
		ft_merge_sort_2(Deque, start, mid);
		ft_merge_sort_2(Deque, mid + 1, end);
		ft_merge_2(Deque, start, mid , end);
		
	}
}

void PmergeMe::ft_create_main_and_pend_2(void)
{
	std::deque<std::pair<int, int> >::iterator it;

	for(it = Deque.begin(); it != Deque.end(); it++)
	{
		if(it == Deque.begin())
		{
			Main2.push_back(it->second);// pend numbers exist in second
			Main2.push_back(it->first);// mian numbers exit in first
			
			Pend2.push_back(it->second);
			continue;
		}
		Main2.push_back(it->first);
		Pend2.push_back(it->second);
		
	}
}

void PmergeMe::ft_the_combination_2(size_t size)
{
	std::deque<int> Jacob;
	Jacob.push_back(0);
	Jacob.push_back(1);
	for(size_t i = 2; i < 20; i++)
		Jacob.push_back(Jacob[i -1] + ( 2 * Jacob[i - 2]));
	Jacob.erase(Jacob.begin() + 1);
	
	Comb2.push_back(0);
	

	for(int i = 1; i < 20 ; i++)
	{
		Comb2.push_back(Jacob[i]);
		for(int j = Jacob[i - 1] + 1; j < Jacob[i]; j++)
		{
			Comb2.push_back(j);

		}
		if(Comb2.size() >= size)
			break;
	}
}

void PmergeMe::ft_final_sort_2()
{
	ft_the_combination_2(Pend2.size());
	int indice;

	std::deque<int>::iterator it;
	for(size_t i = 1; i < Comb2.size(); i++)
	{
		indice = Comb2[i];
		if(indice >= (int)Pend2.size())
			continue;
		it = std::lower_bound(Main2.begin(), Main2.end(), Pend2[indice]);
		Main2.insert(it, Pend2[indice]);
	}
	if(this->left != -1)
	{
		it = std::lower_bound(Main2.begin(), Main2.end(), this->left);
		Main2.insert(it, this->left);
	}
}


void PmergeMe::ft_print_time(double delta_t1, double delta_t2)
{
	std::cout << "Time to process a range of " << v.size() << " elements with std::[..] : ";
	std::cout << delta_t1 << " us" << std::endl;
	
	
	std::cout << "Time to process a range of " << v.size() << " elements with std::[..] : ";
	std::cout << delta_t2 << " us" << std::endl;
}

void PmergeMe::ft_start(int ac, char **av)
{
	ft_parsing(ac, av);
	
	
	
	// the frirst continer -----
	ft_print_befor();
	
	std::clock_t t1_start = std::clock();
	ft_make_pairs();
	ft_use_pair_vector();
	ft_merge_sort(Vector, 0, Vector.size() - 1);
	ft_create_main_and_pend();
	ft_final_sort();
	std::clock_t t1_end = std::clock();
	
	ft_print_after();
	

	// the second continer ---- 
	
	std::clock_t t2_start = std::clock();
	ft_make_pairs_2();
	ft_use_pair_deque();
	ft_merge_sort_2(Deque, 0, Deque.size() - 1);
	ft_create_main_and_pend_2();
	ft_final_sort_2();
	std::clock_t t2_end = std::clock();
	

	double delta_t1 = (static_cast<double>(t1_end - t1_start)) / CLOCKS_PER_SEC;
	double delta_t2 = (static_cast<double>(t2_end - t2_start)) / CLOCKS_PER_SEC;

	ft_print_time(delta_t1, delta_t2);



	
	
}

