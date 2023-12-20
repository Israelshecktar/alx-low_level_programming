#!/usr/bin/python3
"""island_perimeter"""


def island_perimeter(grid):
    """A function the calculate the perimeter of island in a grid"""
    perimeter = 0

    rows = len(grid)
    cols = len(grid[0]) if rows > 0 else 0

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                """Count each land cell as contributing 4 to the perimeter"""
                perimeter += 4

                """Check left neighbor"""
                if col > 0 and grid[row][col - 1] == 1:
                    """Subtract 2 since adjacent sides are shared"""
                    perimeter -= 2

                """Check top neighbor"""
                if row > 0 and grid[row - 1][col] == 1:
                    """Subtract 2 since adjacent sides are shared"""
                    perimeter -= 2

    return perimeter
