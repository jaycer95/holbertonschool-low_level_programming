#!/usr/bin/python3
""" Island Perimeter Task """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid """

    if not grid:
        return 0

    result = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                for i, j in ((i+1, j), (i-1, j), (i, j+1), (i, j-1)):
                    if (i < 0 or i == len(grid) or
                        j < 0 or j == len(grid[i]) or grid[i][j] == 0):
                        result += 1
    return result
