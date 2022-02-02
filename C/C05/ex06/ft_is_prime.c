/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 09:14:20 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/02/23 11:17:23 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_prime(int nb, int i)
{
	if (nb % i != 0 && i <= nb / i)
		return (ft_prime(nb, i + 1));
	else if (i > nb / i)
		return (1);
	else
		return (0);
}

int		ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	else if (nb >= 2)
		return (ft_prime(nb, 2));
	else
		return (0);
}
