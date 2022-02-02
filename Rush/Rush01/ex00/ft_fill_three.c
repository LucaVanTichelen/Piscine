/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobert <jrobert@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 20:45:12 by jrobert           #+#    #+#             */
/*   Updated: 2021/02/21 20:45:14 by jrobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_swap_two_rows(int tab[6][6])
{
	if (tab[1][0] == 2 && tab[0][1] == 3)
	{
		tab[1][0] = 3;
		ft_fill_three_rows(tab);
		tab[1][0] = 2;
	}
	if (tab[4][0] == 2 && tab[5][1] == 3)
	{
		tab[4][0] = 3;
		ft_fill_three_rows(tab);
		tab[4][0] = 2;
	}
	if (tab[1][5] == 2 && tab[0][4] == 3)
	{
		tab[1][5] = 3;
		ft_fill_three_rows(tab);
		tab[1][5] = 2;
	}
	if (tab[4][5] == 2 && tab[5][4] == 3)
	{
		tab[4][5] = 3;
		ft_fill_three_rows(tab);
		tab[4][5] = 2;
	}
}

void	ft_swap_two_cols(int tab[6][6])
{
	if (tab[1][0] == 3 && tab[0][1] == 2)
	{
		tab[0][1] = 3;
		ft_fill_three_cols(tab);
		tab[0][1] = 2;
	}
	if (tab[4][0] == 3 && tab[5][1] == 2)
	{
		tab[5][1] = 3;
		ft_fill_three_cols(tab);
		tab[5][1] = 2;
	}
	if (tab[1][5] == 3 && tab[0][4] == 2)
	{
		tab[0][4] = 3;
		ft_fill_three_cols(tab);
		tab[0][4] = 2;
	}
	if (tab[4][5] == 3 && tab[5][4] == 2)
	{
		tab[5][4] = 3;
		ft_fill_three_cols(tab);
		tab[5][4] = 2;
	}
}

void	ft_fill_three_rows(int tab[6][6])
{
	int x;

	x = 0;
	while (x++ <= 3)
	{
		if (tab[x][0] == 2 &&
		tab[1][0] + tab[2][0] + tab[3][0] + tab[4][0] == 9)
			if ((x == 1 && (tab[2][0] != 2 &&
			tab[3][0] != 2 && tab[4][0] != 2)) ||
			(x == 2 && (tab[1][0] != 2 && tab[3][0] != 2 && tab[4][0] != 2)) ||
			(x == 3 && (tab[1][0] != 2 && tab[2][0] != 2 && tab[4][0] != 2)) ||
			(x == 4 && (tab[1][0] != 2 && tab[2][0] != 2 && tab[3][0] != 2)))
				tab[x][1] = 3;
		if (tab[x][5] == 2 &&
		tab[1][5] + tab[2][5] + tab[3][5] + tab[4][5] == 9)
			if ((x == 1 && (tab[2][5] != 2 &&
			tab[3][5] != 2 && tab[4][5] != 2)) ||
			(x == 2 && (tab[1][5] != 2 && tab[3][5] != 2 && tab[4][5] != 2)) ||
			(x == 3 && (tab[1][5] != 2 && tab[2][5] != 2 && tab[4][5] != 2)) ||
			(x == 4 && (tab[1][5] != 2 && tab[2][5] != 2 && tab[3][5] != 2)))
				tab[x][4] = 3;
	}
}

void	ft_fill_three_cols(int tab[6][6])
{
	int y;

	y = 0;
	while (y++ <= 3)
	{
		if (tab[0][y] == 2 &&
		tab[0][1] + tab[0][2] + tab[0][3] + tab[0][4] == 9)
			if ((y == 1 && (tab[0][2] != 2 &&
			tab[0][3] != 2 && tab[0][4] != 2)) ||
			(y == 2 && (tab[0][1] != 2 && tab[0][3] != 2 && tab[0][4] != 2)) ||
			(y == 3 && (tab[0][1] != 2 && tab[0][2] != 2 && tab[0][4] != 2)) ||
			(y == 4 && (tab[0][1] != 2 && tab[0][2] != 2 && tab[0][3] != 2)))
				tab[1][y] = 3;
		if (tab[5][y] == 2 &&
		tab[5][1] + tab[5][2] + tab[5][3] + tab[5][4] == 9)
			if ((y == 1 && (tab[5][2] != 2 &&
			tab[5][3] != 2 && tab[5][4] != 2)) ||
			(y == 2 && (tab[5][1] != 2 && tab[5][3] != 2 && tab[5][4] != 2)) ||
			(y == 3 && (tab[5][1] != 2 && tab[5][2] != 2 && tab[5][4] != 2)) ||
			(y == 4 && (tab[5][1] != 2 && tab[5][2] != 2 && tab[5][3] != 2)))
				tab[4][y] = 3;
	}
}
