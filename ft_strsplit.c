/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudjem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/22 18:58:28 by aboudjem          #+#    #+#             */
/*   Updated: 2016/10/22 20:53:04 by aboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_mot(char const *s, char c)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c && s[i] != 0)
		{
			count++;
			i++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

static int ft_count_char(char const *s, char c)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			while(s[i] && s[i] != c)
			{
				count++;
				i++;
			}
		}
	}
	return (count);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	i = 0;
	j = 0;
	k = 0;
	split = (char**)malloc(sizeof(char*) * ((ft_count_mot(s, c) + 1)));
	if (!split)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			split[j] = (char *)malloc(sizeof(char) * (ft_count_char(&s[j], c)));
			while (s[i] && s[i] != c)
			{
				split[j][k] = s[i];
				k++;
				i++;
			}
			split[j][k] = '\0';
			k = 0;
		}
	}
	return (split);
}
