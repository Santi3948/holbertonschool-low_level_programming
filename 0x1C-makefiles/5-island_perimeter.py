#!/usr/bin/python3
"""
5-main
"""
def island_perimeter(grid):
    i = 1
    perimeter = 0
    while i < len(grid):
        j = 1
        while j < len(grid[i]):
            if grid[i][j] == 1:
                perimeter += 4
                if grid[i - 1][j] == 1:
                    perimeter -= 1
                if grid[i + 1][j] == 1:
                    perimeter -= 1
                if grid[i][j - 1] == 1:
                    perimeter -= 1
                if grid[i][j + 1] == 1:
                    perimeter -= 1
            j += 1
        i += 1
    return perimeter
