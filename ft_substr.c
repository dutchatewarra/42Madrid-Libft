/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:42:25 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/22 11:07:16 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char* s);
size_t ft_strlcpy(char *dst, const char *src, size_t size);

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	if (s == NULL || start > ft_strlen(s))
		return (NULL);
	char *str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s + start, len);
	return (str);
}