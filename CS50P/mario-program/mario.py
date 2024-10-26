def print_right_triangle(height):
    for index in range(1, height + 1):
        spaces = ' ' * (height - index)
        stars = '*' * index
        print(spaces + stars)

# Example usage with height = 5
print_right_triangle(5)
