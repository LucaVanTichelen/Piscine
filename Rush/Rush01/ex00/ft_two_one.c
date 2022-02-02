/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_two_one.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobert <jrobert@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 20:47:08 by jrobert           #+#    #+#             */
/*   Updated: 2021/02/21 21:58:53 by jrobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_two_one_rows(int tab[6][6])
{
	int y;

	y = 0;
	while (y++ <= 3)
	{
		if (tab[0][y] == 2 && tab[5][y] == 1)
		{
			if (tab[1][y] == 0)
				tab[1][y] = 3;
			if (tab[4][y] == 0)
				tab[4][y] = 4;
			if (tab[2][y] == 1 && tab[3][y] == 0)
				tab[3][y] = 2;
			if (tab[3][y] == 2 && tab[2][y] == 0)
				tab[2][y] = 1;
			if (tab[2][y] == 2 && tab[3][y] == 0)
				tab[3][y] = 1;
			if (tab[3][y] == 1 && tab[2][y] == 0)
				tab[2][y] = 2;
		}
	}
}

void	ft_two_one_cols(int tab[6][6])
{
	int x;

	x = 0;
	while (x++ <= 3)
	{
		if (tab[x][0] == 2 && tab[x][5] == 1)
		{
			if (tab[x][1] == 0)
				tab[x][1] = 3;
			if (tab[x][4] == 0)
				tab[x][4] = 4;
			if (tab[x][2] == 1 && tab[x][3] == 0)
				tab[x][3] = 2;
			if (tab[x][3] == 2 && tab[x][2] == 0)
				tab[x][2] = 1;
			if (tab[x][2] == 2 && tab[x][3] == 0)
				tab[x][3] = 1;
			if (tab[x][3] == 1 && tab[x][2] == 0)
				tab[x][2] = 2;
		}
	}
}
