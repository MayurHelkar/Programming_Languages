
def evenOddCheck_bitwiseShift(eO_num):
    print("Method : evenOddCheck_bitwiseShift()")

    temp = eO_num

    temp >>= 1
    temp <<= 1

    if eO_num == temp:
        print(eO_num, "is Even")
    else:
        print(eO_num, "is Odd\n")

evenOdd = int(input("Enter a number to check if the value is Even or Odd : "))
evenOddCheck_bitwiseShift(evenOdd)