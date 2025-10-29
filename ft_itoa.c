/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anait-il <anait-il@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:24:47 by anait-il          #+#    #+#             */
/*   Updated: 2025/10/27 15:34:15 by anait-il         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_allocat(char *s, int y, int i)
{
	int		j;
	char	*p;

	j = 0;
	p = malloc((i + 1) * sizeof(char));
	if (!p)
		return (NULL);
	if (y == 1)
		p[j++] = '-';
	printf("%d\n", i);
	while (i > 0)
	{
		p[j++] = s[--i];
	}
	printf("%s\n", p);
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
	printf("%s\n", s);
	p = ft_allocat(s, y, i);
	return (p);
}
