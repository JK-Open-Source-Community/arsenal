#Function to check if number is beautiful
def checkBeauty(x):
    setx = set(x)
    listx = list(x)
    output = "Beautiful"
    for num in set(x):
        if listx.count(num) == int(num):
            continue
        else:
            output = "Not Beautiful"
            break
    return output