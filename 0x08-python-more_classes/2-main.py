#!/usr/bin/python3
Rectangle = __import__('2-rectangle').Rectangle

my_rectangle = Rectangle(2, 4)
print("Area: {} - Perimeter: {}".format(my_rectangle.area(), my_rectangle.perimeter()))

print("--")

my_rectangle = Rectangle(10, 3)
print("Area: {} - Perimeter: {}".format(my_rectangle.area(), my_rectangle.perimeter()))
