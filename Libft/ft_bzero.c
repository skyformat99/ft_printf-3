/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 16:20:32 by nfranco-          #+#    #+#             */
/*   Updated: 2020/05/22 16:20:33 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*st;

	i = 0;
	st = (char *)s;
	while (i < n)
	{
		st[i] = '\0';
		i++;
	}
}