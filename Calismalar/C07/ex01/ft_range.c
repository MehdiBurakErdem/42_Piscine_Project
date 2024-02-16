/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdem <merdem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 09:10:56 by merdem            #+#    #+#             */
/*   Updated: 2024/02/11 09:10:56 by merdem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*p;
	int		i;
	int		size;

	i = 0;
	if (max <= min)
	{
		p = NULL;
		return (p);
	}
	size = max - min;
	p = malloc(sizeof(int) * (size));
	if (p == NULL)
		return (NULL);
	while (i < size)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
