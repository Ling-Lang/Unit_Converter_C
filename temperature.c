/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dylan    <kulkajens82@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 00:36:15 by Dylan             #+#    #+#             */
/*   Updated: 2019/11/25 00:54:49 by Dylan            ###   ########.me       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include <math.h>
#include <stdlib.h>

double	ft_c_to_f(double C)
{	
	float	one_eighth;
	float	output_f;

	one_eighth = 1.8;
	output_f = (C * one_eighth) + 32;
	printf("%0.01f \n", output_f);
	return (output_f);
}
