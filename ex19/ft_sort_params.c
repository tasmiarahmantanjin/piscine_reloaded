/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 17:53:59 by trahman           #+#    #+#             */
/*   Updated: 2020/06/09 18:28:25 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0')
		a++;
	return (s1[a] - s2[a]);
}

void	display(int argc, char **argv)
{
	int arg;
	int i;

	arg = 1;
	while (arg < argc)
	{
		i = 0;
		while (argv[arg][i] != '\0')
		{
			ft_putchar(argv[arg][i]);
			i++;
		}
		i = 0;
		ft_putchar('\n');
		arg++;
	}
}

int		main(int argc, char **argv)
{
	int	arg;
	int j;

	arg = 1;
	while (arg < argc - 1)
	{
		j = arg + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[j], argv[arg]) < 0)
			{
				argv[argc + 1] = argv[arg];
				argv[arg] = argv[j];
				argv[j] = argv[argc + 1];
			}
			j++;
		}
		arg++;
	}
	display(argc, argv);
	return (0);
}
