/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 20:42:21 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/02/23 15:46:51 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_sqrt(int nb, int i)
{
	int x;

	x = i;
	if (nb / i == i && nb % i == 0)
		return (i);
	else if (nb / i < i && i - (i - nb / i) / 2 != x)
		return (ft_recursive_sqrt(nb, i - (i - nb / i) / 2));
	else
		return (0);
}

int		ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
		return (ft_recursive_sqrt(nb, nb / 2));
}
