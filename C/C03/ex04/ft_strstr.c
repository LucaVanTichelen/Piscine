/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:50:50 by lvan-tic          #+#    #+#             */
/*   Updated: 2021/02/17 13:57:33 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int n;

	i = 0;
	n = 0;
	if (to_find[n] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[n])
		{
			while (str[i] == to_find[n] && str[i] != '\0')
			{
				i++;
				n++;
			}
			if (to_find[n] == '\0')
				return (str + i - n);
			i = i - n;
			n = 0;
		}
		i++;
	}
	return (0);
}
