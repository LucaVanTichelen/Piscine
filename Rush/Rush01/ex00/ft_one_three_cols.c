/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_one_three_cols.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 20:46:13 by jrobert           #+#    #+#             */
/*   Updated: 2021/02/21 22:07:42 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_one_three_cols_a(int tab[6][6])
{
	int x;

	x = 0;
	while (x++ <= 3)
	{
		if (tab[x][0] == 1 && tab[x][5] == 3)
		{
			if (tab[x][2] == 1)
			{
				if (tab[x][3] == 0)
					tab[x][3] = 3;
				if (tab[x][4] == 0)
					tab[x][4] = 2;
			}
			else if (tab[x][2] == 2)
			{
				if (tab[x][3] == 0)
					tab[x][3] = 3;
				if (tab[x][4] == 0)
					tab[x][4] = 1;
			}
		}
	}
}

void	ft_one_three_cols_b(int tab[6][6])
{
	int x;

	x = 0;
	while (x++ <= 3)
	{
		if (tab[x][0] == 1 && tab[x][5] == 3)
		{
			if (tab[x][4] == 1)
			{
				if (tab[x][2] == 0)
					tab[x][2] = 2;
				if (tab[x][3] == 0)
					tab[x][3] = 3;
			}
			else if (tab[x][3] == 1)
			{
				if (tab[x][2] == 0)
					tab[x][2] = 3;
				if (tab[x][4] == 0)
					tab[x][4] = 2;
			}
		}
	}
}

void	ft_one_three_cols_c(int tab[6][6])
{
	int x;

	x = 0;
	while (x++ <= 3)
	{
		if (tab[x][0] == 1 && tab[x][5] == 3)
		{
			if (tab[x][2] == 3)
			{
				if (tab[x][3] == 0)
					tab[x][3] = 1;
				if (tab[x][4] == 0)
					tab[x][4] = 2;
			}
		}
	}
}
