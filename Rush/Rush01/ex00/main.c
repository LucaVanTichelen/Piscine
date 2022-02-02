/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobert <jrobert@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 20:48:00 by jrobert           #+#    #+#             */
/*   Updated: 2021/02/21 21:18:01 by jrobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	int tab[6][6];

	if (argc != 2)
	{
		ft_putstr_error();
		return (0);
	}
	else if (ft_check_input(argv[1]))
	{
		ft_reset_tab(tab);
		ft_save_params_rows(tab, argv[1]);
		ft_save_params_cols(tab, argv[1]);
		ft_initial_fill_rows(tab);
		ft_initial_fill_cols(tab);
		ft_fill_single_four(tab);
		ft_fill_three_rows(tab);
		ft_fill_three_cols(tab);
		ft_swap_two_rows(tab);
		ft_swap_two_cols(tab);
		ft_master_fill(tab);
		ft_check_table(tab);
	}
	return (0);
}
