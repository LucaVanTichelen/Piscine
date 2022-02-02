/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initial_fill.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobert <jrobert@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 20:45:32 by jrobert           #+#    #+#             */
/*   Updated: 2021/02/21 20:45:36 by jrobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_initial_fill_rows(int tab[6][6])
{
	int x;
	int y;

	y = 0;
	while (y++ <= 3)
	{
		x = 0;
		while (x++ <= 3)
		{
			if (tab[0][y] == 4)
				tab[x][y] = x;
			else if (tab[5][y] == 4)
			{
				tab[4][y] = 1;
				tab[3][y] = 2;
				tab[2][y] = 3;
				tab[1][y] = 4;
			}
			if (tab[0][y] == 1)
				tab[1][y] = 4;
			else if (tab[5][y] == 1)
				tab[4][y] = 4;
		}
	}
}

void	ft_initial_fill_cols(int tab[6][6])
{
	int x;
	int y;

	x = 0;
	while (x++ <= 3)
	{
		y = 0;
		while (y++ <= 3)
		{
			if (tab[x][0] == 4)
				tab[x][y] = y;
			else if (tab[x][5] == 4)
			{
				tab[x][4] = 1;
				tab[x][3] = 2;
				tab[x][2] = 3;
				tab[x][1] = 4;
			}
			if (tab[x][0] == 1)
				tab[x][1] = 4;
			else if (tab[x][5] == 1)
				tab[x][4] = 4;
		}
	}
}
