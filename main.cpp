//Программа считывает пять целых чисел,
//определяет и печатает наибольшее и наименьшее из них
#include "stdafx.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  system("color 70");
   int a, b, c, d, e;
   
   cout << "Vvedite 5 celih chisel\n";
   cin >> a >> b >> c >> d >> e;
   
   if (a > b)
      if (a > c)
         if (a > d)
            if (a > e)
               cout << "Naibolshee chislo " << a << endl;
			   
   if (b > a)
      if (b > c)
         if (b > d)
            if (b > e)
               cout << "Naibolshee chislo " << b << endl;
			   
   if (c > a)
      if (c > b)
         if (c > d)
            if (c > e)
               cout << "Naibolshee chislo " << c << endl;
			   
   if (d > a)
      if (d > b)
         if (d > c)
            if (d > e)
               cout << "Naibolshee chislo " << d << endl;
			   
   if (e > a)
      if (e > b)
         if (e > c)
            if (e > d)
               cout << "Naibolshee chislo " << e << endl;
			   
   if (a < b)
      if (a < c)
         if (a < d)
            if (a < e)
               cout << "Naimenshee chislo " << a << endl;
			   
   if (b < a)
      if (b < c)
         if (b < d)
            if (b < e)
               cout << "Naimenshee chislo " << b << endl;
			   
   if (c < a)
      if (c < b)
         if (c < d)
            if (c < e)
               cout << "Naimenshee chislo " << c << endl;
			   
   if (d < a)
      if (d < b)
         if (d < c)
            if (d < e)
               cout << "Naimenshee chislo " << d << endl;
			   
   if (e < a)
      if (e < b)
         if (e < c)
            if (e < d)
               cout << "Naimenshee chislo " << e << endl;
			   
        system("pause");
   
   return 0;
}
