/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_master_fills.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobert <jrobert@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 20:46:02 by jrobert           #+#    #+#             */
/*   Updated: 2021/02/21 22:26:44 by jrobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_master_fill_functions_rows(int tab[6][6])
{
	ft_one_two_rows(tab);
	ft_two_one_rows(tab);
	ft_one_three_rows_a(tab);
	ft_one_three_rows_b(tab);
	ft_one_three_rows_c(tab);
	ft_three_one_rows_a(tab);
	ft_three_one_rows_b(tab);
	ft_three_one_rows_c(tab);
	ft_two_two_rows_a(tab);
	ft_two_two_rows_b(tab);
	ft_two_two_rows_c(tab);
	ft_two_two_rows_d(tab);
	ft_three_two_rows_a(tab);
	ft_three_two_rows_b(tab);
	ft_three_two_rows_c(tab);
	ft_two_three_rows_a(tab);
	ft_two_three_rows_b(tab);
	ft_last_digit_rows(tab);
	ft_three_one_rows_d(tab);
	ft_two_two_rows_e(tab);
	ft_two_two_rows_f(tab);
	ft_two_two_rows_g(tab);
}

void	ft_master_fill_functions_cols(int tab[6][6])
{
	ft_one_two_cols(tab);
	ft_two_one_cols(tab);
	ft_one_three_cols_a(tab);
	ft_one_three_cols_b(tab);
	ft_one_three_cols_c(tab);
	ft_three_one_cols_a(tab);
	ft_three_one_cols_b(tab);
	ft_three_one_cols_c(tab);
	ft_two_two_cols_a(tab);
	ft_two_two_cols_b(tab);
	ft_two_two_cols_c(tab);
	ft_two_two_cols_d(tab);
	ft_three_two_cols_a(tab);
	ft_three_two_cols_b(tab);
	ft_three_two_cols_c(tab);
	ft_three_one_cols_d(tab);
	ft_two_three_cols_a(tab);
	ft_two_three_cols_b(tab);
	ft_last_digit_cols(tab);
	ft_two_two_cols_e(tab);
	ft_two_two_cols_f(tab);
	ft_two_two_cols_g(tab);
}

void	ft_master_fill(int tab[6][6])
{
	int empty_cells;

	empty_cells = ft_check_empty(tab);
	ft_fill_single_one(tab);
	ft_fill_single_two(tab);
	ft_fill_single_three(tab);
	ft_fill_single_four(tab);
	ft_master_fill_functions_rows(tab);
	ft_master_fill_functions_cols(tab);
	if (empty_cells != ft_check_empty(tab))
		ft_master_fill(tab);
}
