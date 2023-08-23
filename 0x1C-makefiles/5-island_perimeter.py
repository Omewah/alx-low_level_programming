#!/usr/bin/python3
"""
module for island perimeter
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """

    perim = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for a, b in enumerate(grid):
        for x, y in enumerate(b):
            if y == 1:
                if a == 0 or grid[a - 1][x] != 1:
                    perim += 1
                if x == 0 or grid[a][x - 1] != 1:
                    perim += 1
                if x == width or grid[a][x + 1] != 1:
                    perim += 1
                if a == length or grid[a + 1][x] != 1:
                    perim += 1
    return perim
