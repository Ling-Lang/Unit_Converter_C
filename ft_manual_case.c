/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manual_case.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan </var/spool/mail/dylan>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:01:01 by dylan             #+#    #+#             */
/*   Updated: 2022/07/07 10:01:57 by dylan_u          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

double	ft_c_to_f(double C);
int		outputc(void);
int		inputc(void);

double	ft_manual_case(int choice)
{
	double	c;

	if (choice == 1)
	{
		inputc();
		scanf("%lf", &c);
		outputc();
		ft_c_to_f(c);
	}
	return (0);
}

int	inputc(void)
{
	printf("Put the temperature in C it will be converted to F \n");
	return (0);
}

int	outputc(void)
{
	printf("are this much in F \n");
	return (0);
}
