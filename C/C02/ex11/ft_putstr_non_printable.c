/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 06:12:17 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/02/16 11:19:22 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_hex(unsigned int a)
{
	if (a >= 0 && a <= 9)
	{
		ft_putchar(a + '0');
	}
	else
	{
		ft_putchar(a + 87);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 || str[i] == 127)
		{
			ft_putchar(92);
			ft_putchar(str[i] / 16 + '0');
			ft_hex(str[i] % 16);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
