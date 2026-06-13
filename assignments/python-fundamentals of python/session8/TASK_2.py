def r_message(message):
    reverse = ""

    for i in range(len(message) - 1, -1, -1):
        reverse = reverse + message[i]

    return reverse

msg = input("Enter a message: ")

print("Reversed Message:", r_message(msg))