# Task 2: Function to format follower count
def ffc(number):
    if number >= 1000000:
        return f"{number/1000000:.1f}M"
    elif number >= 1000:
        return f"{number/1000:.1f}K"
    else:
        return str(number)


print("1500 followers ->", ffc(1500))
print("1200000 followers ->", ffc(1200000))
