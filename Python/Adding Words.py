def concatenate(*args):
    my_list = []
    for i in args:
        my_list.append(i)
    new_str = '-'.join(my_list)
    print(new_str)

concatenate("I", "love", "Python", "!")
