def convert(input_str):
    # Replace :) with 🙂
    input_str = input_str.replace(":)", "🙂")

    # Replace :( with 🙁
    input_str = input_str.replace(":(", "🙁")

    return input_str

def main():
    user_input = input("Enter a string: ")
    result = convert(user_input)
    print(result)

if __name__ == "__main__":
    main()

