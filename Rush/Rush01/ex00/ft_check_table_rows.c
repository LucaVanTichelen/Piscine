/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_table_rows.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobert <jrobert@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 21:08:29 by jrobert           #+#    #+#             */
/*   Updated: 2021/02/21 21:35:31 by jrobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_check_table(int tab[6][6])
{
	if (ft_check_table_rows_one(tab) &&
	ft_check_table_rows_two(tab) &&
	ft_check_table_rows_three(tab) &&
	ft_check_table_rows_four(tab) &&
	ft_check_table_cols_one(tab) &&
	ft_check_table_cols_two(tab) &&
	ft_check_table_cols_three(tab) &&
	ft_check_table_cols_four(tab))
		ft_print(tab);
	else
		ft_putstr_error();
}

int		ft_check_table_rows_one(int tab[6][6])
{
	int x;
	int y;
	int counter;

	y = 0;
	while (y++ <= 3)
	{
		x = 0;
		counter = 0;
		while (x++ <= 3)
		{
			if (tab[x][y] == 1)
				counter++;
		}
		if (counter != 1)
			return (0);
	}
	return (1);
}

int		ft_check_table_rows_two(int tab[6][6])
{
	int x;
	int y;
	int counter;

	y = 0;
	while (y++ <= 3)
	{
		x = 0;
		counter = 0;
		while (x++ <= 3)
		{
			if (tab[x][y] == 2)
				counter++;
		}
		if (counter != 1)
			return (0);
	}
	return (1);
}

int		ft_check_table_rows_three(int tab[6][6])
{
	int x;
	int y;
	int counter;

	y = 0;
	while (y++ <= 3)
	{
		x = 0;
		counter = 0;
		while (x++ <= 3)
		{
			if (tab[x][y] == 3)
				counter++;
		}
		if (counter != 1)
			return (0);
	}
	return (1);
}

int		ft_check_table_rows_four(int tab[6][6])
{
	int x;
	int y;
	int counter;

	y = 0;
	while (y++ <= 3)
	{
		x = 0;
		counter = 0;
		while (x++ <= 3)
		{
			if (tab[x][y] == 4)
				counter++;
		}
		if (counter != 1)
			return (0);
	}
	return (1);
}
