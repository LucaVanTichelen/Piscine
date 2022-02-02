/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_table_cols.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobert <jrobert@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 21:08:35 by jrobert           #+#    #+#             */
/*   Updated: 2021/02/21 21:33:52 by jrobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_check_table_cols_one(int tab[6][6])
{
	int x;
	int y;
	int counter;

	x = 0;
	while (x++ <= 3)
	{
		y = 0;
		counter = 0;
		while (y++ <= 3)
		{
			if (tab[x][y] == 1)
				counter++;
		}
		if (counter != 1)
			return (0);
	}
	return (1);
}

int		ft_check_table_cols_two(int tab[6][6])
{
	int x;
	int y;
	int counter;

	x = 0;
	while (x++ <= 3)
	{
		y = 0;
		counter = 0;
		while (y++ <= 3)
		{
			if (tab[x][y] == 2)
				counter++;
		}
		if (counter != 1)
			return (0);
	}
	return (1);
}

int		ft_check_table_cols_three(int tab[6][6])
{
	int x;
	int y;
	int counter;

	x = 0;
	while (x++ <= 3)
	{
		y = 0;
		counter = 0;
		while (y++ <= 3)
		{
			if (tab[x][y] == 3)
				counter++;
		}
		if (counter != 1)
			return (0);
	}
	return (1);
}

int		ft_check_table_cols_four(int tab[6][6])
{
	int x;
	int y;
	int counter;

	x = 0;
	while (x++ <= 3)
	{
		y = 0;
		counter = 0;
		while (y++ <= 3)
		{
			if (tab[x][y] == 4)
				counter++;
		}
		if (counter != 1)
			return (0);
	}
	return (1);
}
