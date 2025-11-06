/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anait-il <anait-il@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:24:47 by anait-il          #+#    #+#             */
/*   Updated: 2025/11/06 15:43:24 by anait-il         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_allocat(char *s, int y, int i)
{
	int		j;
	int		z;
	char	*p;

	j = 0;
	z = 1;
	if (y == 1)
		z++;
	p = malloc((i + z) * sizeof(char));
	if (!p)
		return (NULL);
	if (y == 1)
		p[j++] = '-';
	while (i > 0)
	{
		p[j++] = s[--i];
	}
	p[j] = '\0';
	return (p);
}

char	*ft_itoa(int n)
{
	char	s[12];
	int		i;
	int		y;
	char	*p;

	i = 0;
	y = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	while (n != 0)
	{
		if (n < 0)
		{
			y = 1;
			n = -n;
		}
		s[i++] = n % 10 + 48;
		n = n / 10;
	}
	s[i] = '\0';
	p = ft_allocat(s, y, i);
	return (p);
}
