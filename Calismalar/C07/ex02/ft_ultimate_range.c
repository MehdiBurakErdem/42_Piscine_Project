/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdem <merdem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 09:23:36 by merdem            #+#    #+#             */
/*   Updated: 2024/02/11 09:23:36 by merdem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		size;

	i = 0;
	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)(malloc(sizeof(int) * size));
	if (range == NULL)
		return (-1);
	while (i < size)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
