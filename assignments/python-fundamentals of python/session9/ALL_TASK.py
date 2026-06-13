#TASK = 1
my_apps = ["Instagram", "Zomato", "Spotify", "YouTube", "Snapchat"]

print("TASK:1",my_apps)

#TASK = 2

my_apps.append("CHATGPT")

print("TASK:2",my_apps)

#TASK = 3

my_apps.insert(1,"WHATSAPP")

print("TASK:3",my_apps)

#TASK = 4

my_apps.remove("Snapchat")

print("TASK:4 ==USE OF REMOVE===",my_apps)

my_apps.pop()

print("TASK:4 ===USE OF POP===",my_apps)
 
#TASK = 5
my_apps.sort()
print("Sorted List:", my_apps)

my_apps.reverse()
print("Reversed List:", my_apps)
