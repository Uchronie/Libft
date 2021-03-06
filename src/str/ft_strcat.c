/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:13:54 by lmartin-          #+#    #+#             */
/*   Updated: 2016/11/08 21:57:18 by lmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	int n;
	int n2;

	n = 0;
	n2 = 0;
	while (s1[n])
		n++;
	while (s2[n2])
	{
		s1[n] = s2[n2];
		n++;
		n2++;
	}
	s1[n] = '\0';
	return (s1);
}
