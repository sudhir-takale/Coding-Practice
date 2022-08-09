dict = {

    "fast": "quick action ",
    "cod": "cash on delivery",
    "marks": [1, 34, 657, 345, 657],
    "1": 2,
    "anotherdict": {"happy": "happy singh", "shaurya": "little boy"}}

#some operations on dictionary
print(dict.keys()) # -->this print the keys in the dictionary

#if want all keys in the list
print(list(dict.keys()))
print(dict.values()) # -->this prints the values of dictionary
print(dict.items()) # -->all items of dictionary
print(dict)
updatedict ={"hallo":"world","very":"in large amount"}
dict.update(updatedict)
print(dict) #-->this will add the dictionary at the end of previous dict.
print(dict.get('cod'))