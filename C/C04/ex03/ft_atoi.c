/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 17:31:07 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/02/18 17:08:39 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			i++;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10;
		n = n + *str - 48;
		str++;
	}
	if (i % 2 == 1)
		return (-n);
	return (n);
}