/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 15:55:36 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/02/15 15:59:51 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
	}
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
