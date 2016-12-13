#Program Discription: Write a program that will allow a user to enter a 4-digit year and check whether or not it is a leap year
#Program Author: Liam Mc Cormick
#Date: 13-12-16
#OS: Gentoo
#Kernel: Linux 4.8.12-r1

print("Enter a number to check if it is a leap year")
year= int(input())

#A leap year is defined as being any year that is evenly
#divisible by 4, except if it is divisible by 100 and it
#is not divisible by 400.

#The first if statment checks if it is divisable by 4 but not 100
#The second if statment checks if it is divisable by 100 and 400
#if one statment or another is correct, the year is a leap year

test1= year%4
test2= year%100
test3= year%400

if (test1 == 0 and test2 != 0) or (test2 == 0 and test3 == 0):
  print(year,"is a leap year")
else:
  print(year,"is not a leap year")

