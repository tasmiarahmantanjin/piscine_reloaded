/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 15:09:03 by trahman           #+#    #+#             */
/*   Updated: 2020/06/09 19:34:20 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb > 12)
		return (0);
	if (nb > 0)
	{
		if (nb > 0)
		{
			nb = (nb * ft_recursive_factorial(nb - 1));
		}
		return (nb);
	}
	return (0);
}
