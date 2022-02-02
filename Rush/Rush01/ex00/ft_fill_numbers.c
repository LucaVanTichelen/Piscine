/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobert <jrobert@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 20:45:03 by jrobert           #+#    #+#             */
/*   Updated: 2021/02/21 21:30:05 by jrobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_fill_single_one(int tab[6][6])
{
	int x;
	int y;
	int count;
	int x_num;
	int y_num;

	x_num = 0;
	y_num = 0;
	count = 0;
	y = 0;
	while (y++ <= 3)
	{
		x = 0;
		while (x++ <= 3)
		{
			if (tab[x][y] == 1)
			{
				x_num += x;
				y_num += y;
				count++;
			}
		}
	}
	if (count == 3 && tab[10 - x_num][10 - y_num] == 0)
		tab[10 - x_num][10 - y_num] = 1;
}

void	ft_fill_single_two(int tab[6][6])
{
	int x;
	int y;
	int count;
	int x_num;
	int y_num;

	x_num = 0;
	y_num = 0;
	count = 0;
	y = 0;
	while (y++ <= 3)
	{
		x = 0;
		while (x++ <= 3)
		{
			if (tab[x][y] == 2)
			{
				x_num += x;
				y_num += y;
				count++;
			}
		}
	}
	if (count == 3 && tab[10 - x_num][10 - y_num] == 0)
		tab[10 - x_num][10 - y_num] = 2;
}

void	ft_fill_single_three(int tab[6][6])
{
	int x;
	int y;
	int count;
	int x_num;
	int y_num;

	x_num = 0;
	y_num = 0;
	count = 0;
	y = 0;
	while (y++ <= 3)
	{
		x = 0;
		while (x++ <= 3)
		{
			if (tab[x][y] == 3)
			{
				x_num += x;
				y_num += y;
				count++;
			}
		}
	}
	if (count == 3 && tab[10 - x_num][10 - y_num] == 0)
		tab[10 - x_num][10 - y_num] = 3;
}

void	ft_fill_single_four(int tab[6][6])
{
	int x;
	int y;
	int count;
	int x_num;
	int y_num;

	x_num = 0;
	y_num = 0;
	count = 0;
	y = 0;
	while (y++ <= 3)
	{
		x = 0;
		while (x++ <= 3)
		{
			if (tab[x][y] == 4)
			{
				x_num += x;
				y_num += y;
				count++;
			}
		}
	}
	if (count == 3 && tab[10 - x_num][10 - y_num] == 0)
		tab[10 - x_num][10 - y_num] = 4;
}
