/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobert <jrobert@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 20:46:38 by jrobert           #+#    #+#             */
/*   Updated: 2021/02/21 20:46:40 by jrobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_putstr(char *x)
{
	while (*x)
	{
		write(1, x, 1);
		x++;
	}
}

void	ft_putstr_error(void)
{
	write(1, "Error\n", 6);
}

void	ft_print(int tab[6][6])
{
	int x;
	int y;

	y = 1;
	while (y <= 4)
	{
		x = 1;
		while (x <= 4)
		{
			ft_putchar(tab[x][y] + 48);
			if (x != 4)
				ft_putchar(' ');
			x++;
		}
		y++;
		ft_putchar('\n');
	}
}
