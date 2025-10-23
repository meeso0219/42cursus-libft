/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changpar <changpar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:42:40 by changpar          #+#    #+#             */
/*   Updated: 2025/10/23 19:42:50 by changpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if the given character is an alphabetic letter.
 *
 * This function tests whether the integer value passed as @p c corresponds
 * to an uppercase ('A'–'Z') or lowercase ('a'–'z') letter in the ASCII table.
 * The argument must be representable as an unsigned char or be the value EOF.
 *
 * @param c The character to check, passed as an int. Typically a char value
 *          promoted to int when calling this function.
 *
 * @return Returns 1 if @p c is an alphabetic character (A–Z or a–z),
 *         otherwise returns 0.
 *
 * @note This implementation follows the behavior of the standard C
 *       library function isalpha(), but only supports ASCII letters.
 *
 * @example
 *     ft_isalpha('A');   // returns 1
 *     ft_isalpha('z');   // returns 1
 *     ft_isalpha('5');   // returns 0
 *     ft_isalpha('#');   // returns 0
 */
int ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}