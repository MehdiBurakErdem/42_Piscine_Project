/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdem <merdem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:25:33 by merdem            #+#    #+#             */
/*   Updated: 2024/02/13 19:25:33 by merdem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	boyut(char *p)
{
	int		a;

	a = 0;
	while (p[a])
		a++;
	return (a);
}

int	total_lenght(int size, char **strs, char *sep)
{
	int		i;
	int		boyt;

	i = 0;
	boyt = (boyut(sep) * (size - 1));
	while (i < size)
	{
		boyt += boyut(strs[i]);
		i++;
	}
	boyt++;
	return (boyt);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		boyt;
	char	*p;

	i = 0;
	k = 0;
	j = 0;
	boyt = total_lenght(size, strs, sep);
	p = (char *)malloc(sizeof(char) * boyt);
	if (size == 0 || (!p))
		return (p);
	while (i < (boyt - 1))
	{
		k = 0;
		while (strs[j][k])
			p[i++] = strs[j][k++];
		k = 0;
		while (sep[k] && (j != (size -1)))
			p[i++] = sep[k++];
		j++;
	}
	p[i] = '\0';
	return (p);
}
