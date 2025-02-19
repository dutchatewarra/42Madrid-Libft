/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:24:56 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/22 17:31:15 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(char c);

int	ft_tolower(char c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}
