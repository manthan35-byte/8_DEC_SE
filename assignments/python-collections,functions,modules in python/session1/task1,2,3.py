# task1
fav_items = ["Humnava Mere", 20, 2.5, True]

print(f"fav_song:{fav_items[0]},\nage:{fav_items[1]},\ndata_uses:{fav_items[2]},\npremium_subscription:{fav_items[3]}\n")

#task2

fav_items[0] = "Kesariya"
fav_items[1] = fav_items[1] + 1

print(f"fav_song:{fav_items[0]},\nage:{fav_items[1]},\ndata_uses:{fav_items[2]},\npremium_subscription:{fav_items[3]}")

#task3

del fav_items[2]

print(fav_items)
