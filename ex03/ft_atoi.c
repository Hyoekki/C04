/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:42:13 by jhyokki           #+#    #+#             */
/*   Updated: 2024/09/12 10:56:44 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	sign = 0;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign++;
		str++;
	}
	if (sign % 2 == 0)
		sign = 1;
	else
		sign = -1;
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
