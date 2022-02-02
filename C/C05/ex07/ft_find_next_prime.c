/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 11:58:38 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/02/23 12:15:35 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_prime(int nb, int i)
{
	if (nb % i != 0 && i <= nb / i)
		return (ft_prime(nb, i + 1));
	else if (nb % i != 0 && i > nb / i)
		return (nb);
	else
		return (ft_prime(nb + 1, 2));
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	else
		return (ft_prime(nb, 2));
}
