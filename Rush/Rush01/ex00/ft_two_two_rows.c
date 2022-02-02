/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_two_two_rows.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobert <jrobert@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 20:47:26 by jrobert           #+#    #+#             */
/*   Updated: 2021/02/21 22:28:46 by jrobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_two_two_rows_f(int tab[6][6])
{
	int y;

	y = 0;
	while (y++ <= 3)
	{
		if (tab[0][y] == 2 && tab[5][y] == 2)
		{
			if (tab[1][y] == 2 && tab[2][y] == 1)
			{
				if (tab[3][y] == 0)
					tab[3][y] = 4;
				if (tab[4][y] == 0)
					tab[4][y] = 3;
			}
			if (tab[1][y] == 2)
				if (tab[4][y] == 0)
					tab[4][y] = 3;
			if (tab[1][y] == 2 && tab[3][y] == 4)
				if (tab[2][y] == 0)
					tab[2][y] = 1;
		}
	}
}

void	ft_two_two_rows_g(int tab[6][6])
{
	int y;

	y = 0;
	while (y++ <= 3)
	{
		if (tab[0][y] == 2 && tab[5][y] == 2)
		{
			if (tab[1][y] == 3 && tab[2][y] == 4)
			{
				if (tab[3][y] == 0)
					tab[3][y] = 1;
				if (tab[4][y] == 0)
					tab[4][y] = 2;
			}
		}
	}
}
