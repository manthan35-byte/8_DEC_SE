restaurants = ["Burger Hub", "Pizza Point", "Sushi House"]
delivery_time = [30, 25, 40]

for name, time in zip(restaurants, delivery_time):
    print(name, "-", time, "min")
