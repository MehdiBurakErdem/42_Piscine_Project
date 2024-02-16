/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdem <merdem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 09:20:39 by merdem            #+#    #+#             */
/*   Updated: 2024/02/03 09:20:39 by merdem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (i == 0)
		{
			if (str[i] <= 'z' && str[i] >= 'a')
				str[i] -= 32;
		}
		else if (str[i] == ' ' || str[i] == '-' || str[i] == '+')
		{
			if (str[i + 1] <= 'z' && str[i + 1] >= 'a')
			{
				i++;
				str[i] -= 32;
			}
			else if (str[i + 1] <= 'Z' && str[i + 1] >= 'A')
				i++;
		}
		else if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] += 32;
		i++;
	}
	return (str);
}
