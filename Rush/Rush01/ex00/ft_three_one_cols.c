/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three_one_cols.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobert <jrobert@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 20:46:49 by jrobert           #+#    #+#             */
/*   Updated: 2021/02/21 22:29:19 by jrobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_three_one_cols_a(int tab[6][6])
{
	int x;

	x = 0;
	while (x++ <= 3)
	{
		if (tab[x][0] == 3 && tab[x][5] == 1)
		{
			if (tab[x][4] == 0)
				tab[x][4] = 4;
			if (tab[x][3] == 3)
			{
				if (tab[x][1] == 0)
					tab[x][1] = 2;
				if (tab[x][2] == 0)
					tab[x][2] = 1;
			}
		}
	}
}

void	ft_three_one_cols_b(int tab[6][6])
{
	int x;

	x = 0;
	while (x++ <= 3)
	{
		if (tab[x][0] == 3 && tab[x][5] == 1)
		{
			if (tab[x][1] == 2 && tab[x][2] == 1 && tab[x][3] == 0)
				tab[x][3] = 3;
			else if (tab[x][1] == 2 && tab[x][3] == 3 && tab[x][2] == 0)
				tab[x][2] = 1;
			else if (tab[x][1] == 2 && tab[x][2] == 3 && tab[x][3] == 0)
				tab[x][3] = 1;
			else if (tab[x][1] == 2 && tab[x][3] == 1 && tab[x][2] == 0)
				tab[x][2] = 3;
			else if (tab[x][3] == 2)
			{
				if (tab[x][1] == 0)
					tab[x][1] = 1;
				if (tab[x][2] == 0)
					tab[x][2] = 3;
			}
		}
	}
}

void	ft_three_one_cols_c(int tab[6][6])
{
	int x;

	x = 0;
	while (x++ <= 3)
	{
		if (tab[x][0] == 3 && tab[x][5] == 1)
		{
			if (tab[x][3] == 3)
			{
				if (tab[x][1] == 0)
					tab[x][1] = 2;
				if (tab[x][2] == 0)
					tab[x][2] = 1;
			}
			if (tab[x][3] == 1)
			{
				if (tab[x][1] == 0)
					tab[x][1] = 2;
				if (tab[x][2] == 0)
					tab[x][2] = 3;
			}
		}
	}
}

void	ft_three_one_cols_d(int tab[6][6])
{
	int x;

	x = 0;
	while (x++ <= 3)
	{
		if (tab[x][0] == 3 && tab[x][5] == 1)
		{
			if (tab[x][1] == 1)
			{
				if (tab[x][2] == 0)
					tab[x][2] = 3;
				if (tab[x][3] == 0)
					tab[x][3] = 2;
			}
			if (tab[x][2] == 3 && tab[x][3] == 2 && tab[x][1] == 0)
				tab[x][1] = 1;
			if (tab[x][2] == 3 && tab[x][3] == 1 && tab[x][1] == 0)
				tab[x][1] = 2;
		}
	}
}
