/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleolive <aleolive@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 12:39:51 by aleolive          #+#    #+#             */
/*   Updated: 2021/02/14 12:53:39 by aleolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char x);

void	ft_first_line(int x)
{
	ft_putchar('A');
	while (x >= 3)
	{
		ft_putchar('B');
		x--;
	}
	ft_putchar('C');
	ft_putchar(10);
}

void	ft_space(int x, int y)
{
	int a;

	a = 3;
	while (y >= 3)
	{
		ft_putchar('B');
		while (a <= x)
		{
			ft_putchar(32);
			a++;
		}
		a = 3;
		ft_putchar('B');
		ft_putchar(10);
		y--;
	}
}

void	ft_last_line(int x)
{
	ft_putchar('A');
	while (x >= 3)
	{
		ft_putchar('B');
		x--;
	}
	ft_putchar('C');
	ft_putchar(10);
}

void	ft_axis(int y)
{
	ft_putchar('A');
	ft_putchar(10);
	while (y >= 3)
	{
		ft_putchar('B');
		ft_putchar(10);
		y--;
	}
	ft_putchar('C');
	ft_putchar(10);
}

void	rush(int x, int y)
{
	if (x == 1 && y >= 2)
	{
		ft_axis(y);
	}
	else if (x >= 2 && y >= 2)
	{
		ft_first_line(x);
		ft_space(x, y);
		ft_last_line(x);
	}
	else if (x >= 2 && y == 1)
	{
		ft_first_line(x);
	}
	else if (x == 1 && y == 1)
	{
		ft_putchar('A');
		ft_putchar(10);
	}
	else
	{
		ft_putchar(0);
	}
}
