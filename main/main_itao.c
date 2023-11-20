/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itao.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:01:56 by lionelulm         #+#    #+#             */
/*   Updated: 2023/11/20 13:09:44 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(void)
{
    int test_values[] = {0, 123, -456, INT_MIN, INT_MAX, -2147483647};

    for (int i = 0; i < sizeof(test_values) / sizeof(test_values[0]); i++)
    {
        int n = test_values[i];
        char *result = ft_itoa(n);

        if (result != NULL)
        {
            printf("Input: %d, Result: %s\n", n, result);
            free(result);
        }
        else
        {
            printf("Memory allocation error for input: %d\n", n);
        }
    }

    return 0;
}
