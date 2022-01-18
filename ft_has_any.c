/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_has_any.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkutkut <jre-gonz@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:01:01 by jkutkut           #+#    #+#             */
/*   Updated: 2022/01/18 09:53:48 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_has_any(char c, char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		if (str[i] == c)
			return (1);
	return (0);
}
