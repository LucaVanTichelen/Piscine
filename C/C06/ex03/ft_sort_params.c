/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 13:44:53 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/02/24 09:27:48 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strcmp(char *str, char *str2)
{
	while (*str == *str2 && *str != '\0' && *str2 != '\0')
	{
		str++;
		str2++;
	}
	if (*str == *str2)
		return (0);
	else
		return (*str - *str2);
}

void	ft_swap(char **argv, int x, int y)
{
	argv[0] = argv[x];
	argv[x] = argv[y];
	argv[y] = argv[0];
}

int		main(int argc, char **argv)
{
	int x;
	int y;

	x = 1;
	while (x < argc)
	{
		y = x + 1;
		while (y < argc)
		{
			if (ft_strcmp(argv[x], argv[y]) > 0)
				ft_swap(argv, x, y);
			y++;
		}
		x++;
	}
	x = 1;
	while (x < argc)
	{
		ft_putstr(argv[x]);
		ft_putchar('\n');
		x++;
	}
	return (0);
}
