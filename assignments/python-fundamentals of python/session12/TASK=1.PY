# Task 1: Function to calculate discounted price

def discounte(price, discount_percent):
    discount = price * discount_percent / 100
    final_price = price - discount
    return final_price

print("Discounted Price:",discounte(500, 10))
