#!/usr/bin/python3
"""5-island_perimeter"""
def island_perimeter(grid):
    """
    return the p, of the island.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    height = len(grid)
    width = len(grid[0])
    size = 0
    edge = 0
    for row in range(height):
        for col in range(width):
            if grid[row][col] == 1:
                size += 1
                if (col > 0 and grid[row][col - 1] == 1):
                    edge += 1
                if (row > 0 and grid[row - 1][col] == 1):
                    edge += 1
    return (size * 4) - (edge * 2)