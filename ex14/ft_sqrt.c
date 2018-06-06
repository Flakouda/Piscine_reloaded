/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:28:24 by flakouda          #+#    #+#             */
/*   Updated: 2017/11/09 12:28:25 by flakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int	a;
	int	i;
	int n;

	a = 3;
	i = 1;
	n = 1;
	if (nb < 1)
		return (0);
	while (i <= nb)
	{
		if (nb == i)
			return (n);
		i += a;
		a += 2;
		n += 1;
	}
	return (0);
}
