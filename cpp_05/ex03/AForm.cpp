/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 20:58:14 by arimanuk          #+#    #+#             */
/*   Updated: 2026/06/17 17:46:12 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

std::ostream& operator<<(std::ostream& os, const AForm& src)
{
	os << "AForm \"" << src.getName() << "\""
		<< ", signed: " << (src.getSign() ? "yes" : "no")
		<< ", grade to sign: " << src.getGradeSign()
		<< ", grade to execute: " << src.getGradeExecute()
		<< ".";
	return os;
}

AForm::AForm(const AForm& other) : name(other.name), gradeSign(other.gradeSign), gradeExecute(other.gradeExecute)
{
	this->sign = other.sign;
}

AForm& AForm::operator=(const AForm& other)
{
	if (this == &other)
		return (*this);
	this->sign = other.sign;
	return (*this);
}

AForm::AForm() : name("default name"), gradeSign(100), gradeExecute(100)
{
	this->sign = false;
	std::cout << "AForm default constructor was called" << std::endl;
}

AForm::AForm(const std::string& name, int gradeSign, int gradeExecute) : name(name), sign(false), gradeSign(gradeSign), gradeExecute(gradeExecute)
{
	if (gradeSign < 1 || gradeExecute < 1)
		throw GradeTooHighException();
	if (gradeSign > 150 || gradeExecute > 150)
		throw GradeTooLowException();
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > gradeSign)
		throw GradeTooLowException();
	sign = true;
}

void AForm::checkExecutability(const Bureaucrat& executor) const
{
	if (!this->sign)
		throw FormNotSignedException();
	if (executor.getGrade() > this->gradeExecute)
		throw GradeTooLowException();
}


const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return "Form is not signed";
}

std::string AForm::getName() const
{
	return (this->name);
}

bool AForm::getSign() const
{
	return (this->sign);
}

int AForm::getGradeSign() const
{
	return (this->gradeSign);
}

int AForm::getGradeExecute() const
{
	return (this->gradeExecute);
}

AForm::~AForm()
{
	std::cout << "AForm destructor was called" << std::endl;
}