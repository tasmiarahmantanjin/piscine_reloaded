/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 13:50:44 by trahman           #+#    #+#             */
/*   Updated: 2020/06/09 17:36:18 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int range;
	int *ret;

	if (min >= max)
	{
		ret = NULL;
		return (ret);
	}
	range = ((max--) - min);
	ret = (int*)malloc(sizeof(*ret) * range);
	i = 0;
	while (i < range)
	{
		ret[i] = min++;
		i++;
	}
	return (ret);
}
