#!/usr/bin/python3
"""
function that returns the perimiter of the island described in grid
"""


def island_perimeter(grid):
    """Function that returns the perimeter of the island described in grid"""
    ct1 = 0
    ct2 = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                if x > 0 and grid[x - 1][y] == 1:
                    ct2 += 1
                if y > 0 and grid[x][y - 1] == 1:
                    ct2 += 1
                ct1 += 1
    pem = (ct1 * 4) - (ct2 * 2)
    return pem
