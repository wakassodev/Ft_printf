/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaman-s < imaman-s@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:19:52 by imaman-s          #+#    #+#             */
/*   Updated: 2022/03/08 05:30:58 by imaman-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <ctype.h>
*	DESCRIPTION
*	The isalnum() function tests for any character for which isalpha(3) or 
*	isdigit(3) is true. The value of the argument must be representable as an 
*	unsigned char or the value of EOF.
*	PARAMETERS
*	#1. The character to test.
*	RETURN VALUES
*	The isalnum() function returns zero if the character tests false and returns 
*	non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c < '0') || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || (c > 'z'))
		return (0);
	return (1);
}
