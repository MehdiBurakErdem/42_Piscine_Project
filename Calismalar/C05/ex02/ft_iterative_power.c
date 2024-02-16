/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdem <merdem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 08:54:59 by merdem            #+#    #+#             */
/*   Updated: 2024/02/07 08:54:59 by merdem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		nbr;

	nbr = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power != 1)
	{
		nb *= nbr;
		power--;
	}
	return (nb);
}
