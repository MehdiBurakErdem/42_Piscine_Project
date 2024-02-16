/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdem <merdem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 09:23:30 by merdem            #+#    #+#             */
/*   Updated: 2024/02/09 09:23:30 by merdem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*p;

	i = 0;
	while (src[i])
	{
		i++;
	}
	p = malloc(sizeof(char) * (i + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	while (i >= 0)
	{
		p[i] = src[i];
		i--;
	}
	return (p);
}
