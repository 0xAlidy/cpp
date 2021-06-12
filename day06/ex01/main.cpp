/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 10:19:45 by alidy             #+#    #+#             */
/*   Updated: 2021/06/12 10:57:51 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <ctime>

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

void*   serialize(void)
{
    std::srand(std::time(NULL));
    char *res = new char[16 + sizeof(int)];
    char str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    for(int i = 0; i < 8; i++)
        res[i] = str[static_cast<unsigned int>(std::rand() % sizeof(str))];
    *reinterpret_cast<int *>(res + 8) = std::rand();
    for(int i = 0; i < 8; i++)
        res[i + 8 + sizeof(int)] = str[static_cast<unsigned int>(std::rand() % sizeof(str))];
    return (res);
}

Data*   deserialize(void * raw)
{
    Data *res = new Data;
    char *str = reinterpret_cast<char *>(raw);

    res->s1 = std::string(str, 8);
    res->n = *reinterpret_cast<int *>(str + 8);
	res->s2 = std::string(str + 8 + sizeof(int), 8);
	return res;

}

int main(void)
{
    void *raw = serialize();
    Data *data = deserialize(raw);

	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "n:  " << data->n << std::endl;
	std::cout << "s2: " << data->s2 << std::endl;

	delete data;
    delete static_cast<char *>(raw);
    return (0);
}