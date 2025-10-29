/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anait-il <anait-il@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:58:14 by anait-il          #+#    #+#             */
/*   Updated: 2025/10/25 16:04:55 by anait-il         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_first(const char *s1, const char *set)
{
	size_t	first;
	size_t	i;

	i = 0;
	first = 0;
	while (s1[first] && set[i])
	{
		if (s1[first] == set[i])
			first++;
		else
			i++;
	}
	return (first);
}

static size_t	check_end(size_t end, const char *set, const char *s1)
{
	size_t	i;

	i = 0;
	while (end > 0 && set[i])
	{
		if (s1[end - 1] == set[i])
		{
			end--;
			i = 0;
		}
		else
			i++;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	end;
	char	*p;
	size_t	lenght_p;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	end = ft_strlen(s1);
	first = check_first(s1, set);
	end = check_end(end, set, s1);
	lenght_p = end - first;
	p = ft_substr(s1, first, lenght_p);
	return (p);
}
