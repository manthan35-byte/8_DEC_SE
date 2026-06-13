marks = int(input("enter your marks (0-100):"))

if marks >= 90:
    print("=== A grade===")
elif marks >=89 and marks <75:
    print("=== B grade===") 
elif marks >=74 and marks <60:
    print("=== C grade===") 
elif marks >=59 and marks <40:
    print("=== D grade===") 
elif marks < 40:
    print("=== F grade===") 
else:
    print("===FAIL===")
