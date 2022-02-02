/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 11:49:59 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/02/14 17:02:08 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_tab(int *tab, int *tab2, int size)
{
	int n;
	int x;

	n = 0;
	x = 1;
	while (n <= size)
	{
		while (x <= size)
		{
			if (tab[n] > tab2[x])
			{
				tab[n] = tab2[x];
				tab[x] = tab2[n];
				tab2[n] = tab[n];
				tab2[x] = tab[x];
			}
			x++;
		}
		n++;
		x = n + 1;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int tab2[size];
	int n;

	n = 0;
	size = size - 1;
	while (n <= size)
	{
		tab2[n] = tab[n];
		n++;
	}
	ft_tab(tab, tab2, size);
}
