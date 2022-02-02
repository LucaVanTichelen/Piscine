/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 10:11:34 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/02/25 17:32:03 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int n;

	if (min >= max)
		return (0);
	if (!(tab = malloc(sizeof(int) * (max - min))))
		return (-1);
	if (!(range = malloc(sizeof(int) * (max - min))))
		return (-1);
	n = 0;
	while (min < max)
	{
		tab[n] = min;
		n++;
		min++;
	}
	range[0] = tab;
	return (n);
}
