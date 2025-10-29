/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anait-il <anait-il@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:09:38 by anait-il          #+#    #+#             */
/*   Updated: 2025/10/23 22:49:31 by anait-il         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	if (size != 0 && nitems > 18446744073709551615UL / size)
		return (NULL);
	ptr = malloc(size * nitems);
	if (ptr == NULL)
		return (NULL);
	while (i < nitems * size)
	{
		ptr[i] = '\0';
		i++;
	}
	return ((void *)ptr);
}



