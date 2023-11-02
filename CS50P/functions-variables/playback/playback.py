# Prompt the user for input
user_input = input("Enter a string: ")

# Split the input into words
words = user_input.split()

# Change the string by adding a separator between words
seperator = "..."
user_input_modified = seperator.join(words)

# Output
print(user_input_modified)

