/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobert <jrobert@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 20:47:33 by jrobert           #+#    #+#             */
/*   Updated: 2021/02/21 22:32:52 by jrobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

int		ft_check_input(char *params);
void	ft_reset_tab(int tab[6][6]);
void	ft_save_params_rows(int tab[6][6], char *params);
void	ft_save_params_cols(int tab[6][6], char *params);
void	ft_initial_fill_rows(int tab[6][6]);
void	ft_initial_fill_cols(int tab[6][6]);
void	ft_fill_single_one(int tab[6][6]);
void	ft_fill_single_two(int tab[6][6]);
void	ft_fill_single_three(int tab[6][6]);
void	ft_fill_single_four(int tab[6][6]);
void	ft_fill_three_rows(int tab[6][6]);
void	ft_fill_three_cols(int tab[6][6]);
void	ft_master_fill(int tab[6][6]);
void	ft_check_table(int tab[6][6]);
void	ft_print(int tab[6][6]);
void	ft_swap_two_rows(int tab[6][6]);
void	ft_swap_two_cols(int tab[6][6]);
void	ft_one_two_rows(int tab[6][6]);
void	ft_two_one_rows(int tab[6][6]);
void	ft_one_three_rows_a(int tab[6][6]);
void	ft_one_three_rows_b(int tab[6][6]);
void	ft_one_three_rows_c(int tab[6][6]);
void	ft_three_one_rows_a(int tab[6][6]);
void	ft_three_one_rows_b(int tab[6][6]);
void	ft_three_one_rows_c(int tab[6][6]);
void	ft_three_one_rows_d(int tab[6][6]);
void	ft_two_two_rows_a(int tab[6][6]);
void	ft_two_two_rows_b(int tab[6][6]);
void	ft_two_two_rows_c(int tab[6][6]);
void	ft_two_two_rows_d(int tab[6][6]);
void	ft_three_two_rows_a(int tab[6][6]);
void	ft_three_two_rows_b(int tab[6][6]);
void	ft_three_two_rows_c(int tab[6][6]);
void	ft_two_three_rows_a(int tab[6][6]);
void	ft_two_three_rows_b(int tab[6][6]);
void	ft_last_digit_rows(int tab[6][6]);
void	ft_one_two_cols(int tab[6][6]);
void	ft_two_one_cols(int tab[6][6]);
void	ft_one_three_cols_a(int tab[6][6]);
void	ft_one_three_cols_b(int tab[6][6]);
void	ft_one_three_cols_c(int tab[6][6]);
void	ft_three_one_cols_a(int tab[6][6]);
void	ft_three_one_cols_b(int tab[6][6]);
void	ft_three_one_cols_c(int tab[6][6]);
void	ft_three_one_cols_d(int tab[6][6]);
void	ft_two_two_cols_a(int tab[6][6]);
void	ft_two_two_cols_b(int tab[6][6]);
void	ft_two_two_cols_c(int tab[6][6]);
void	ft_two_two_cols_d(int tab[6][6]);
void	ft_three_two_cols_a(int tab[6][6]);
void	ft_three_two_cols_b(int tab[6][6]);
void	ft_three_two_cols_c(int tab[6][6]);
void	ft_two_three_cols_a(int tab[6][6]);
void	ft_two_three_cols_b(int tab[6][6]);
void	ft_last_digit_cols(int tab[6][6]);
int		ft_check_empty(int tab[6][6]);
void	ft_putstr(char *x);
void	ft_putstr_error(void);
int		ft_check_table_rows_one(int tab[6][6]);
int		ft_check_table_rows_two(int tab[6][6]);
int		ft_check_table_rows_three(int tab[6][6]);
int		ft_check_table_rows_four(int tab[6][6]);
int		ft_check_table_cols_one(int tab[6][6]);
int		ft_check_table_cols_two(int tab[6][6]);
int		ft_check_table_cols_three(int tab[6][6]);
int		ft_check_table_cols_four(int tab[6][6]);
void	ft_two_two_cols_e(int tab[6][6]);
void	ft_two_two_cols_f(int tab[6][6]);
void	ft_two_two_cols_g(int tab[6][6]);
void	ft_three_one_rows_d(int tab[6][6]);
void	ft_three_one_cols_d(int tab[6][6]);
void	ft_two_two_rows_e(int tab[6][6]);
void	ft_two_two_rows_f(int tab[6][6]);
void	ft_two_two_rows_g(int tab[6][6]);

#endif
