def print_str(num):
    if num == 1:
        return

    else:
        k = print_str(num - 1)
        print("This is the recursive function ")
        return k


# if __name__ == '__main__':
# times = int(input("Enter the input :"))
print_str(5)
# print_str(times);
