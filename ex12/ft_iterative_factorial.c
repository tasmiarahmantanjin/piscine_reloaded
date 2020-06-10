/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 18:47:34 by trahman           #+#    #+#             */
/*   Updated: 2020/06/04 16:33:43 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fac;

	fac = nb;
	if (nb < 0 || nb > 15)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
	{
		while (nb > 1)
		{
			fac = fac * (nb - 1);
			nb--;
		}
	}
	return (fac);
}
