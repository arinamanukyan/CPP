/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 20:58:14 by arimanuk          #+#    #+#             */
/*   Updated: 2026/06/17 17:09:03 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

std::ostream& operator<<(std::ostream& os, const Form& src)
{
	os << "Form \"" << src.getName() << "\""
		<< ", signed: " << (src.getSign() ? "yes" : "no")
		<< ", grade to sign: " << src.getGradeSign()
		<< ", grade to execute: " << src.getGradeExecute()
		<< ".";
	return os;
}

Form::Form(const Form& other) : name(other.name), sign(other.sign), gradeSign(other.gradeSign), gradeExecute(other.gradeExecute) {}

Form& Form::operator=(const Form& other)
{
	if (this == &other)
		return (*this);
	this->sign = other.sign;
	return (*this);
}

Form::Form() : name("default name"), gradeSign(100), gradeExecute(100)
{
	this->sign = false;
	std::cout << "Form default constructor was called" << std::endl;
}

Form::Form(const std::string& name, int gradeSign, int gradeExecute) : name(name), sign(false), gradeSign(gradeSign), gradeExecute(gradeExecute)
{
	if (gradeSign < 1 || gradeExecute < 1)
		throw GradeTooHighException();
	if (gradeSign > 150 || gradeExecute > 150)
		throw GradeTooLowException();
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > gradeSign)
		throw GradeTooLowException();
	sign = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

const std::string& Form::getName() const
{
	return (this->name);
}

bool Form::getSign() const
{
	return (this->sign);
}

int Form::getGradeSign() const
{
	return (this->gradeSign);
}

int Form::getGradeExecute() const
{
	return (this->gradeExecute);
}

Form::~Form()
{
	std::cout << "Form destructor was called" << std::endl;
}