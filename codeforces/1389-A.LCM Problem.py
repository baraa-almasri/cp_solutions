#!/bin/python3

# reminder
# a * b = LCM(a, b) * GCD (a, b)
# LCM(a, b) = (a * b) / GCD(a, b)


# return great common divisor of two numbers
def getGCD(a, b):  # return int for the sack of the problem
    if a == 0:
        return int(b)
    return getGCD(b % a, a)


# return least common multiplier of two numbers
def getLCM(a, b):  # return int for the sack of the problem
    return int((a * b) / getGCD(a, b))


def solve1389(l, r):
    x, y = l, l*2

    if l <= getLCM(x, y) <= r:
        return x, y

    return -1, -1


t = int(input())

while t:
    lr = list(map(int, input().split()))

    x, y = solve1389(lr[0], lr[1])

    print(x, y)

    t -= 1
