/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdem <merdem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:59:33 by merdem            #+#    #+#             */
/*   Updated: 2024/01/30 10:59:35 by merdem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;
	int	gci;

	i = 1;
	while (i <= size && tab[i] != '\0')
	{
		if (tab[i] < tab [i - 1])
		{
			gci = tab[i];
			k = i;
			while (k > 0)
			{
				if (tab[k - 1] > gci)
				{
					tab[k] = tab[k -1];
				}
				else
					break ;
				k--;
			}
			tab[k] = gci;
		}
		i++;
	}
}
