calls = (12, 5, 0, 20, 7, 3, 15)

calls = list(calls)

new_calls = []

for i in calls:
    if i >= 5:
        new_calls.append(i)

calls = tuple(new_calls)

print(calls)
