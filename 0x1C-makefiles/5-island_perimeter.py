#!/usr/bin/python3
"""
5-island_perimeter
is a fuction to technival interview prepartion : that return the peri,ter of the island described in grid variable
"""
def island_perimeter(grid):
    """
    return the p, of the island

    """
    height = len(grid)
    width = len(grid[0])
    size = 0
    edge = 0
    for row in range(height - 1):
        for col in range(width - 1):
            if grid[row][col] == 1:
                size += 1
                if (col > 0 and grid[row][col - 1] == 1):
                    edge += 1
                if (row > 0 and grid[row - 1][col] == 1):
                    edge += 1
    return size * 4 - edge * 2