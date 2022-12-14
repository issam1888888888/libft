/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:52:10 by ichouare          #+#    #+#             */
/*   Updated: 2022/10/26 09:42:49 by ichouare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*strimplement(char *str, char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (*(s1 + j))
	{
		*(str + i) = *(s1 + j);
		j++;
		i++;
	}
	j = 0;
	while (*(s2 + j))
	{
		*(str + i) = *(s2 + j);
		j++;
		i++;
	}
	*(str + i) = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;

	str = NULL;
	if (!s1 || !s2)
		return (str);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	strimplement(str, s1, s2);
	return (str);
}
