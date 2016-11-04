/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecunniet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:42:52 by ecunniet          #+#    #+#             */
/*   Updated: 2016/11/03 12:17:01 by ecunniet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int res;

	i = 1;
	res = 1;
	if (nb >= 0 && nb < 13)
	{
		while (i <= nb)
		{
			res = i * res;
			i++;
		}
		return (res);
	}
	return (0);
}
