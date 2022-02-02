/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 15:31:15 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/02/25 17:26:59 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int n;

	if (min >= max)
		return (0);
	if (!(tab = malloc(sizeof(*tab) * (max - min))))
		return (0);
	n = 0;
	while (min < max)
	{
		tab[n] = min;
		n++;
		min++;
	}
	return (tab);
}
