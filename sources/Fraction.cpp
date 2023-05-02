#include <iostream>
#include <stdio.h>
#include "Fraction.hpp"

using namespace std;

using namespace ariel;

/* NOTES in the hpp class */

    Fraction::Fraction(float f_num):
        numrator(int(f_num)), denominator(int(f_num)){}

    Fraction::Fraction(int numrator, int denominator):
        numrator(numrator), denominator(denominator){}

/* Operators :*/
    const Fraction Fraction::operator+(const Fraction& other) const
    {
        return Fraction(1, 1);
    }
    const Fraction Fraction::operator-(const Fraction& other) const
    {
        return Fraction(1, 1);
    }
    const Fraction Fraction::operator/(const Fraction& other) const
    {
        return Fraction(1, 1);
    }
    const Fraction Fraction::operator*(const Fraction& other) const
    {
        return Fraction(1, 1);
    }

/* Bool :*/
    bool Fraction::operator>=(const Fraction& other) const 
    {
        return true;
    }
    bool Fraction::operator<=(const Fraction& other) const 
    {
        return true;
    }
    bool Fraction::operator>(const Fraction& other) const 
    {
        return true;
    }
    bool Fraction::operator<(const Fraction& other) const 
    {
        return true;
    }
    bool Fraction::operator==(const Fraction& other) const 
    {
        return true;
    }
    bool Fraction::operator!=(const Fraction& other) const 
    {
        return true;
    }

/* Float op' fraction :*/
    Fraction Fraction::operator+(const float& other) const  
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator-(const float& other) const 
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator/(const float& other) const 
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator*(const float& other) const
    {
        return Fraction(1, 1);
    }

/* Bool fraction :*/
    bool Fraction::operator>=(const float& other) const
    {
        return true;
    }
    bool Fraction::operator<=(const float& other) const
    {
        return true;
    }
    bool Fraction::operator>(const float& other) const
    {
        return true;
    }
    bool Fraction::operator<(const float& other) const
    {
        return true;
    }
    bool Fraction::operator!=(const float& other) const
    {
        return true;
    }
    bool Fraction::operator==(const float& other) const
    {
        return true;
    }

/* Op' :*/
    Fraction operator+(const float n, const Fraction& fraction)
    {
        return fraction;
    }
    Fraction operator-(const float n, const Fraction &fraction)
    {
        return fraction;
    }
    Fraction operator/(const float n, const Fraction &fraction)
    {
        return fraction;
    }
    Fraction operator*(const float n, const Fraction &fraction)
    {
        return fraction;
    }
    
/* Bool Op' :*/
    bool operator==(const float n, const Fraction& fraction)
    {
        return true;
    }
    bool operator!=(const float n, const Fraction &fraction)
    {
        return true;
    }
    bool operator>=(const float n, const Fraction &fraction)
    {
        return true;
    }
    bool operator<=(const float n, const Fraction &fraction)
    {
        return true;
    }
    bool operator>(const float n, const Fraction &fraction)
    {
        return true;
    }
    bool operator<(const float n, const Fraction &fraction)
    {
        return true;
    }
    /* pre inc' : */
    Fraction &Fraction::operator++()
    {
        return *this;
    }
    /* pre dec' : */
    Fraction &Fraction::operator--()
    {
        return *this;
    }
    /* post inc' : */
    Fraction Fraction::operator++(int n)
    {
        Fraction result(*this);
        numrator += denominator;
        return result;
    }
   /* post dec' : */
    Fraction Fraction::operator--(int n)
    {
        Fraction result(*this);
        numrator -= denominator;
        return result;
    }
    std::ostream &operator<<(std::ostream &os_Stream, const Fraction &fraction)
    {
        os_Stream << fraction.getNumrator() << "/" << fraction.getDenominator();
        return os_Stream;
    }
    std::istream &operator>>(std::istream &is_Stream, const Fraction &fraction)
    {
        return is_Stream;
    }
