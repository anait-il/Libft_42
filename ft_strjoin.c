/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anait-il <anait-il@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:59:58 by anait-il          #+#    #+#             */
/*   Updated: 2025/11/05 18:38:28 by anait-il         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*chkon_null(const char *s1, const char *s2)
{
	if (!s1)
		return (ft_strdup(s2));
	else
		return (ft_strdup(s1));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*p;
	size_t	s1len;
	size_t	s2len;
	size_t	dstsize;

	if (!s1 && !s2)
		return (NULL);
	if (!s1 || !s2)
		return (chkon_null(s1, s2));
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	p = malloc(s1len + s2len + 1);
	if (!p)
		return (NULL);
	i = 0;
	dstsize = s1len + s2len;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	ft_strlcat(p, s2, dstsize + 1);
	return (p);
}
#include <stdio.h>
int main()
{
	char *s = ft_strjoin(NULL, NULL);
	printf("%s", s);
}
