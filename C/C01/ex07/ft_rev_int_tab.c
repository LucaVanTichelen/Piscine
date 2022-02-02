/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 11:03:02 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/02/13 11:47:53 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int tab2[size];
	int n;

	size = size - 1;
	n = 0;
	while (n <= size)
	{
		tab2[n] = tab[n];
		n++;
	}
	n = 0;
	while (size >= 0)
	{
		tab[n] = tab2[size];
		size--;
		n++;
	}
}
