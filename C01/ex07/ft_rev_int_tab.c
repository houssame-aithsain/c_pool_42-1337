/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-hsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 12:17:29 by hait-hsa          #+#    #+#             */
/*   Updated: 2022/03/30 12:08:25 by hait-hsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		c = tab[i];
			tab[i] = tab [size - i - 1];
			tab[size - i -1] = c;
			i++;
	}
}
