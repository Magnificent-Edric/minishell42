/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gannemar <gannemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:16:04 by gannemar          #+#    #+#             */
/*   Updated: 2022/08/01 14:26:55 by gannemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		((char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
