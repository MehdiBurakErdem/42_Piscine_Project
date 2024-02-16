/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdem <merdem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:44:56 by merdem            #+#    #+#             */
/*   Updated: 2024/02/03 16:44:56 by merdem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		j;

	j = 0;
	if (!(to_find[j]))
		return (str);
	while (*str)
	{
		while (*str == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str - j);
			str++;
			j++;
		}
		j = 0;
		str++;
	}
	return (0);
}
