/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdem <merdem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 08:53:36 by merdem            #+#    #+#             */
/*   Updated: 2024/02/09 08:53:36 by merdem           ###   ########.fr       */
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

int	main(int argc, char *argv[])
{
	while (1 < argc)
	{
		ft_putchar(argv[--argc]);
	}
	return (0);
}
