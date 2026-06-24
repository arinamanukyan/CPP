/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 21:22:54 by arina             #+#    #+#             */
/*   Updated: 2026/03/16 22:06:30 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];

    public:
        Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        std::string getIdeas(int index) const;
        ~Brain();
        // void setter(const Brain& other)
        // {
        //     for(int i = 0; i < 100; i++)
        //         this->ideas[i] = other.ideas[i];
        // }
        // void set0(std::string str) {
        //     ideas[0] = str;
        // }
};

#endif