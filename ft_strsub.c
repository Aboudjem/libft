/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudjem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 20:48:30 by aboudjem          #+#    #+#             */
/*   Updated: 2016/10/22 22:08:51 by aboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = (char*)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	int i = 0;
	while (len > 0)
	{
		str[i++] = s[start++];
		len--;
	}
	str[i] = '\0';
	return (str);
}
