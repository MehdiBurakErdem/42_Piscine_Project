/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdem <merdem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:53:26 by merdem            #+#    #+#             */
/*   Updated: 2024/02/02 10:53:26 by merdem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		n;

	n = 0;
	while (str[n])
	{
		if ((str[n] <= 'Z' && str[n] >= 'A'))
			str[n] = str[n] + 32;
		n++;
	}
	return (str);
}
