from random import shuffle

groups = list(range(1,8))
shuffle(groups)
print(groups[:4])
print(groups[4:])