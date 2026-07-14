li=["Hi", "Spam", "Hello", "Spam", "How are you?"]

for a in li:
    if a == "Spam":
        continue

    if a == "How are you?":
        break

    print(a)
