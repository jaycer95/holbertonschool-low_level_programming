#!/usr/bin/python3
""" Island Perimeter Task """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid """
    height = 0
    width = 0
    maxw = 0

    if not grid:
        return 0
    for i in grid:
        width = 0
        for k in i:
            if k == 1:
                width += 1
        if width != 0:
            height += 1
        if width == 0 and height != 0:
            break
        if maxw < width:
            maxw = width

    return (maxw + height) * 2
