/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 14:04:12 by trahman           #+#    #+#             */
/*   Updated: 2020/06/09 14:31:19 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			++count;
		++i;
	}
	return (count);
}
