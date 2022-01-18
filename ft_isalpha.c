/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:36:37 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/18 16:11:11 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isalpha(char c)
{
	return ((c >= "a" && c <= "z") || (c >= 'A' && c <= 'Z'));
}
