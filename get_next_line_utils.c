/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouchma <kcouchma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:45:57 by kcouchma          #+#    #+#             */
/*   Updated: 2023/11/13 09:47:37 by kcouchma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_gnl_strlen(const char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

size_t	ft_gnl_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size -1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_gnl_strlen(src));
}

char	*ft_gnl_strdup(const char *s)
{
	char	*output;

	output = malloc(ft_gnl_strlen(s) + 1);
	if (output == NULL)
		return (NULL);
	ft_gnl_strlcpy(output, s, ft_gnl_strlen(s) + 1);
	return (output);
}

void	*ft_gnl_calloc(size_t nmemb, size_t size)
{
	char	*output;
	size_t	i;

	i = 0;
	output = malloc(nmemb * size);
	if (output == NULL)
		return (NULL);
	while (i < nmemb)
	{
		output[i] = '\0';
		i++;
	}
	return (output);
}

char	*ft_gnl_strjoin(char *s1, char *s2)
{
	char	*output;
	int		i;

	output = malloc(sizeof(char) * (ft_gnl_strlen(s1) + ft_gnl_strlen(s2) + 1));
	if (output == NULL)
		return (free(s1), NULL);
	i = 0;
	while (s1[i])
	{
		output[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		output[i] = *s2;
		i++;
		s2++;
	}
	output[i] = '\0';
	free(s1);
	return (output);
}
