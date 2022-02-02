/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_two_two_cols.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobert <jrobert@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 20:47:20 by jrobert           #+#    #+#             */
/*   Updated: 2021/02/21 22:25:56 by jrobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_two_two_cols_f(int tab[6][6])
{
	int x;

	x = 0;
	while (x++ <= 3)
	{
		if (tab[x][0] == 2 && tab[x][5] == 2)
		{
			if (tab[x][1] == 2 && tab[x][2] == 1)
			{
				if (tab[x][3] == 0)
					tab[x][3] = 4;
				if (tab[x][4] == 0)
					tab[x][4] = 3;
			}
			if (tab[x][1] == 2)
				if (tab[x][4] == 0)
					tab[x][4] = 3;
			if (tab[x][1] == 2 && tab[x][3] == 4)
				if (tab[x][2] == 0)
					tab[x][2] = 1;
		}
	}
}

void	ft_two_two_cols_g(int tab[6][6])
{
	int x;

	x = 0;
	while (x++ <= 3)
	{
		if (tab[x][0] == 2 && tab[x][5] == 2)
		{
			if (tab[x][1] == 3 && tab[x][2] == 4)
			{
				if (tab[x][3] == 0)
					tab[x][3] = 1;
				if (tab[x][4] == 0)
					tab[x][4] = 2;
			}
		}
	}
}
