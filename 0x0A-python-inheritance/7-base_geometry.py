#!/usr/bin/python3
"""Module 7-base_geometry.
Creates a BaseGeometry class.
"""


class BaseGeometry:
    """new Class BaseGeometry"""

    def area(self):
        """Public instance method: def area(self): that raises an Exception"""
        raise Exception("area() is not implemented")

    def integer_validator(self, name, value):
        if not isinstance(value, int):
            raise TypeError("{} must be an integer".format(name))
        if value <= 0:
            raise ValueError("{} must be greater than 0".format(name))
