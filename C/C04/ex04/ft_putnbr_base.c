/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 12:03:33 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/02/18 18:42:42 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_putnbr(int nbr, char *base, int n)
{
	if (nbr >= n)
	{
		ft_putnbr(nbr / n, base, n);
	}
	ft_putchar(base[nbr % n]);
}

int		ft_base(char *base, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (base[i] == base[n])
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int n;

	n = 0;
	while (base[n] != '\0')
	{
		if (base[n] == '+' || base[n] == '-')
			break ;
		else if (ft_base(base, n) == 0)
			break ;
		n++;
	}
	if (n > 1 && base[n] == '\0')
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		ft_putnbr(nbr, base, n);
	}
}
