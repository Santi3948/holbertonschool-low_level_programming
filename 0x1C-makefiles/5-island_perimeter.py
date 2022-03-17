#!/usr/bin/python3
"""
5-main
"""


def island_perimeter(grid):
    "island_perimeter def"
    perimeter = 0
    for lis in range(len(grid)):
        for item in range(len(grid[lis])):
            if grid[lis][item] == 1:
                perimeter += 4
                if grid[lis][item + 1] and grid[lis][item + 1] == 1:
                    perimeter -= 1
                if grid[lis][item - 1] and grid[lis][item - 1] == 1:
                    perimeter -= 1
                if grid[lis + 1][item] and grid[lis + 1][item] == 1:
                    perimeter -= 1
                if grid[lis - 1][item] and grid[lis - 1][item] == 1:
                    perimeter -= 1
    return perimeter
