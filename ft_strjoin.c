/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudjem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 22:31:25 by aboudjem          #+#    #+#             */
/*   Updated: 2016/10/21 11:53:38 by aboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char*)malloc(sizeof(char) * (size));
	if (!str)
		return (NULL);
	while (i <= size)
	{
		while (s1[i] != '\0')
		{
			str[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
			str[i++] = s2[j++];
		i++;
	}
	return (str);
}
