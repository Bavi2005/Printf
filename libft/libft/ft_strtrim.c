/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpichyal <bpichyal@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 22:56:37 by Bavi              #+#    #+#             */
/*   Updated: 2025/05/28 00:14:29 by bpichyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	j = (ft_strlen(s1) - 1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[i] && ft_strchr(set, s1[j]))
		j--;
	str = ft_substr(s1, i, ((j - i) + 1));
	return (str);
}
