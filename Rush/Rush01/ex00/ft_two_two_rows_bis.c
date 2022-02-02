/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_two_two_rows_bis.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobert <jrobert@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 20:47:26 by jrobert           #+#    #+#             */
/*   Updated: 2021/02/21 22:28:36 by jrobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_two_two_rows_a(int tab[6][6])
{
	int y;

	y = 0;
	while (y++ <= 3)
	{
		if (tab[0][y] == 2 && tab[5][y] == 2)
		{
			if (tab[2][y] == 2 || tab[4][y] == 1)
			{
				if (tab[1][y] == 0)
					tab[1][y] = 3;
				if (tab[2][y] == 0)
					tab[2][y] = 2;
				if (tab[3][y] == 0)
					tab[3][y] = 4;
				if (tab[3][y] == 0)
					tab[4][y] = 1;
			}
		}
	}
}

void	ft_two_two_rows_b(int tab[6][6])
{
	int y;

	y = 0;
	while (y++ <= 3)
	{
		if (tab[0][y] == 2 && tab[5][y] == 2)
		{
			if (tab[1][y] == 1 || tab[3][y] == 2)
			{
				if (tab[1][y] == 0)
					tab[1][y] = 1;
				if (tab[2][y] == 0)
					tab[2][y] = 4;
				if (tab[3][y] == 0)
					tab[3][y] = 2;
				if (tab[3][y] == 0)
					tab[4][y] = 3;
			}
		}
	}
}

void	ft_two_two_rows_c(int tab[6][6])
{
	int y;

	y = 0;
	while (y++ <= 3)
	{
		if (tab[0][y] == 2 && tab[5][y] == 2)
		{
			if (tab[1][y] == 3 && tab[2][y] == 1)
			{
				if (tab[3][y] == 0)
					tab[3][y] = 4;
				if (tab[4][y] == 0)
					tab[4][y] = 2;
			}
			else if (tab[3][y] == 4 && tab[4][y] == 3)
			{
				if (tab[1][y] == 0)
					tab[1][y] = 2;
				if (tab[2][y] == 0)
					tab[2][y] = 1;
			}
		}
	}
}

void	ft_two_two_rows_d(int tab[6][6])
{
	int y;

	y = 0;
	while (y++ <= 3)
	{
		if (tab[0][y] == 2 && tab[5][y] == 2)
		{
			if (tab[1][y] == 2 && tab[2][y] == 4)
			{
				if (tab[3][y] == 0)
					tab[3][y] = 1;
				if (tab[4][y] == 0)
					tab[4][y] = 3;
			}
		}
	}
}

void	ft_two_two_rows_e(int tab[6][6])
{
	int y;

	y = 0;
	while (y++ <= 3)
	{
		if (tab[0][y] == 2 && tab[5][y] == 2)
		{
			if (tab[1][y] == 1)
			{
				if (tab[2][y] == 0)
					tab[2][y] = 4;
				if (tab[3][y] == 0)
					tab[3][y] = 2;
				if (tab[4][y] == 0)
					tab[4][y] = 3;
			}
		}
	}
}
