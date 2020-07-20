/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 17:02:36 by kbatwoma          #+#    #+#             */
/*   Updated: 2020/05/19 16:02:41 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	if (n == 0)
		return (s);
	while (n != 0)
	{
		*((char *)s + (n - 1)) = c;
		n--;
	}
	return ((void *)s);
}
