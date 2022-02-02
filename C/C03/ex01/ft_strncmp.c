/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 16:18:48 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/02/17 17:04:56 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i + 1 < n)
	{
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] < 0 && s2[i] < 0)
	{
		return (s1[i] - s2[i]);
	}
	else if (s2[i] < 0)
	{
		return (s1[i] - s2[i] - 256);
	}
	else if (s1[i] < 0)
	{
		return (s1[i] - s2[i] + 256);
	}
	return (s1[i] - s2[i]);
}
