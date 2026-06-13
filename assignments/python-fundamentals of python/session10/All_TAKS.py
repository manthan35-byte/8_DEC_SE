# Task 1: Create and print a tuple of favorite apps

app = ("Instagram","Zomato","Spotify","WhatsApp","Flipkart")
print("Favorite Apps:",app)

# Task 2: Access and print the 2nd and 4th app names

print("second fav App:",app[1])
print("fourth fav App:",app[3])

# Task 3: Try to change the first element

#app[0] = 'YouTube'

# This will give:
# TypeError: 'tuple' object does not support item assignment

"""
Tuples is immutable,that means their elements
cannot be changable after the tuple is created.
"""

# Task 4: Print the middle three app names using slicing
print(app[1:4])

# Task 5: Create another tuple and concatenate
new_app = ('YouTube', 'Telegram')
all_apps = app+new_app

print("All Apps:", all_apps)
