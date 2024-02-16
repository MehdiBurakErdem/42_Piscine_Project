/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdem <merdem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 08:59:30 by merdem            #+#    #+#             */
/*   Updated: 2024/02/09 08:59:30 by merdem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *p)
{
	int		i;

	i = 0;
	while (p[i] != '\0')
	{
		write(1, &p[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_sort(char *str)
{
	int		size;
	int		i;
	char	gc;

	size = 0;
	while (str[size])
		size++;
	size--;
	while (size != 0)
	{
		i = 0;
		while (i < size)
		{
			if (str[i] > str[i + 1])
			{
				gc = str[i];
				str[i] = str[i + 1];
				str[i + 1] = gc;
			}
			i++;
		}
		size--;
	}
	ft_putchar(str);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_sort(argv[i]);
		i++;
	}
	return (0);
}
