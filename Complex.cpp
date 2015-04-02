// File: Complex.cpp
#include "Complex.h"

// Complex class constructor
Complex::Complex(int real, int imaginary):m_real(real),m_imaginary(imaginary)
{
 
}

// Accessor that returns real part of complex number
int Complex::GetReal() const
{
  return m_real;
}

// Accessor that returns imaginary part of complex number
int Complex::GetImaginary() const
{
  return m_imaginary;
}

////////////////////

const Complex Complex::operator+ (const Complex& rhs) const
{
  const Complex newComplex(m_real + rhs.m_real, m_imaginary + rhs.m_imaginary);
  return newComplex;
}

const Complex Complex::operator-() const
{
  const Complex newComplex(-m_real, -m_imaginary);
  return newComplex;
}

// Overloaded << operator as non-member function
ostream & operator << (ostream& out, const Complex& number)
{
  int tempImag = number.GetImaginary();
  if (tempImag >= 0)
    out << number.GetReal() << " + " << number.GetImaginary() << 'i';
  else
    out << number.GetReal() << " - " << abs(number.GetImaginary()) << 'i';
  return out;
}
