/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudjem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 20:20:01 by aboudjem          #+#    #+#             */
/*   Updated: 2016/10/21 11:25:15 by aboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;

	if (*little == '\0')
		return ((char*)big);
	i = 0;
	j = 0;
	while (big[i] != '\0')
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
