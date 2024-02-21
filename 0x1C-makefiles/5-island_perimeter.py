#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
    - grid (list of list of int): The grid representing the island.

    Returns:
    - int: The perimeter of the island.
    """

    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Add 4 for each land cell

                # Check adjacent cells
                if i > 0 and grid[i - 1][j] == 1:  # Up
                    perimeter -= 2  # Subtract 2 for shared edge
                if j > 0 and grid[i][j - 1] == 1:  # Left
                    perimeter -= 2  # Subtract 2 for shared edge

    return perimeter
