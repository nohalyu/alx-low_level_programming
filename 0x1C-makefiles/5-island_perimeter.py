#!/usr/bin/python3
""" Defines an island perimeter function """


def island_perimeter(grid):
    """
        Returns the perimeter of the island

        The grid have water represented by 0 and land 1

        Args:
            grid(list): list of list of integers

        Return:
            returns the perimeter of the island
    """
    width = len(grid[0])
    height = len(grid)
    size = 0
    edges = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - 2 * edges
