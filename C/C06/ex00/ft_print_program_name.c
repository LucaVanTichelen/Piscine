/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:32:14 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/02/23 12:54:18 by lvan-tic         ###   ########.fr       */
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

	(void)argc;
	x = 0;
	while (argv[0][x] != '\0')
	{
		ft_putchar(argv[0][x]);
		x++;
	}
	ft_putchar('\n');
	return (0);
}
