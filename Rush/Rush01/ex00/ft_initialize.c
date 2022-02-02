/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobert <jrobert@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 20:45:41 by jrobert           #+#    #+#             */
/*   Updated: 2021/02/21 20:53:47 by jrobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_check_input(char *params)
{
	int i;

	i = 0;
	while (params[i] != 0)
	{
		if ((i == 0 || i % 2 == 0) && (params[i] < '1' || params[i] > '4'))
		{
			ft_putstr_error();
			return (0);
		}
		else if (i % 2 != 0 && params[i] != 32)
		{
			ft_putstr_error();
			return (0);
		}
		i++;
	}
	if (i != 31)
	{
		ft_putstr_error();
		return (0);
	}
	else
		return (1);
}

int		ft_check_empty(int tab[6][6])
{
	int x;
	int y;
	int empty_cells;

	empty_cells = 0;
	y = 0;
	while (y++ <= 3)
	{
		x = 0;
		while (x++ <= 3)
		{
			if (tab[x][y] == 0)
				empty_cells++;
		}
	}
	return (empty_cells);
}

void	ft_reset_tab(int tab[6][6])
{
	int x;
	int y;

	y = 0;
	while (y <= 5)
	{
		x = 0;
		while (x <= 5)
		{
			tab[x][y] = 0;
			x++;
		}
		y++;
	}
}

void	ft_save_params_rows(int tab[6][6], char *params)
{
	int x;
	int y;
	int i;

	i = 0;
	x = 1;
	y = 0;
	while (x <= 4)
	{
		tab[x][y] = params[i] - 48;
		x++;
		i += 2;
	}
	x = 1;
	y = 5;
	while (x <= 4)
	{
		tab[x][y] = params[i] - 48;
		x++;
		i += 2;
	}
}

void	ft_save_params_cols(int tab[6][6], char *params)
{
	int x;
	int y;
	int i;

	i = 16;
	x = 0;
	y = 1;
	while (y <= 4)
	{
		tab[x][y] = params[i] - 48;
		y++;
		i += 2;
	}
	x = 5;
	y = 1;
	while (y <= 4)
	{
		tab[x][y] = params[i] - 48;
		y++;
		i += 2;
	}
}
