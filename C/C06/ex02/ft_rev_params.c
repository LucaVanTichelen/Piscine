/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 13:38:26 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/02/23 13:41:44 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

int		main(int argc, char **argv)
{
	int x;

	argc = argc - 1;
	while (argc > 0)
	{
		x = 0;
		while (argv[argc][x] != '\0')
		{
			ft_putchar(argv[argc][x]);
			x++;
		}
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
