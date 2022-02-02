/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_one_two.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 20:46:30 by jrobert           #+#    #+#             */
/*   Updated: 2021/02/21 22:04:33 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_one_two_rows(int tab[6][6])
{
	int y;

	y = 0;
	while (y++ <= 3)
	{
		if (tab[0][y] == 1 && tab[5][y] == 2)
		{
			if (tab[1][y] == 0)
				tab[1][y] = 4;
			if (tab[4][y] == 0)
				tab[4][y] = 3;
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

void	ft_one_two_cols(int tab[6][6])
{
	int x;

	x = 0;
	while (x++ <= 3)
	{
		if (tab[x][0] == 1 && tab[x][5] == 2)
		{
			if (tab[x][1] == 0)
				tab[x][1] = 4;
			if (tab[x][4] == 0)
				tab[x][4] = 3;
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
