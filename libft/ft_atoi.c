/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:57:02 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/19 16:54:09 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		result;
	int		i;
	int		p_m;

	result = 0;
	i = 0;
	p_m = 1;
	while (str[i] == '\v' || str[i] == '\t' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == '\n' || str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-')
	{
		p_m = -1;
	}
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * p_m);
}
