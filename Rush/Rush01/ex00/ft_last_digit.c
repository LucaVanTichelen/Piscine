/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobert <jrobert@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 20:45:52 by jrobert           #+#    #+#             */
/*   Updated: 2021/02/21 20:45:54 by jrobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_last_digit_rows(int tab[6][6])
{
	int x;
	int y;
	int count;
	int nb;

	y = 0;
	while (y++ <= 3)
	{
		x = 0;
		nb = 0;
		count = 0;
		while (x++ <= 3)
		{
			if (tab[x][y] != 0)
				count++;
			nb = nb + tab[x][y];
		}
		if (count == 3)
		{
			while (tab[x][y] != 0)
				x--;
			tab[x][y] = 10 - nb;
		}
	}
}

void	ft_last_digit_cols(int tab[6][6])
{
	int x;
	int y;
	int count;
	int nb;

	x = 0;
	while (x++ <= 3)
	{
		y = 0;
		nb = 0;
		count = 0;
		while (y++ <= 3)
		{
			if (tab[x][y] == 0)
				count++;
			nb = nb + tab[x][y];
		}
		if (count == 1)
		{
			while (tab[x][y] != 0)
				y--;
			tab[x][y] = 10 - nb;
		}
	}
}
