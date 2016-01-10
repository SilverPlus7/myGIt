def average(*args):
    #avg = 0
    #for num in args:
    #    avg = avg + num
    #lent = len(args)
    #return avg / lent
    if len(args) != 0:
        return float(sum(args)) / len(args)
    else:
        return 0   


print average()

print average(2,3,4,5,6,7)
