/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 23:31:44 by lmartin-          #+#    #+#             */
/*   Updated: 2016/08/10 13:54:50 by lmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int cp;

	cp = 2;
	if (nb < 0)
		nb = -nb;
	if (nb == 0 || nb == 1 || nb == 2)
		return ((nb > 1) ? 1 : 0);
	while (cp < nb)
		if (nb % cp++ == 0)
			return (0);
	return (1);
}
