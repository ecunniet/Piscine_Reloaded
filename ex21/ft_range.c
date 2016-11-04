/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecunniet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 20:23:04 by ecunniet          #+#    #+#             */
/*   Updated: 2016/11/04 18:24:33 by ecunniet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	size;
	int	*ret;
	int	i;

	i = 0;
	size = max - min;
	if (size <= 0)
		return (NULL);
	else
	{
		ret = (int*)malloc(sizeof(int) * (size));
		while (i < size)
		{
			ret[i] = min + i;
			i++;
		}
		return (ret);
	}
	return (0);
}
