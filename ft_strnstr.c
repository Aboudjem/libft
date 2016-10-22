/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudjem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 17:19:22 by aboudjem          #+#    #+#             */
/*   Updated: 2016/10/21 11:28:14 by aboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	if (*little == '\0')
		return ((char*)big);
	i = 0;
	j = 0;
	while (big[i] != '\0' && i + 1 < len)
	{
		j = 0;
		while (big[i] == little[j])
		{
			i++;
			j++;
			if (little[j + 1] == '\0')
			{
				return ((char*)big + (i - j));
			}
		}
		i++;
	}
	return (NULL);
}
