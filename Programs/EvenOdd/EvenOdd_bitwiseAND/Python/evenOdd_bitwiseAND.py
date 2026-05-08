
def evenOddCheck_bitwiseAND(eO_num):
    print("Method : evenOddCheck_bitwiseAND()")
    if (eO_num & 1) == 0:
        print(eO_num, "is Even")
    else:
        print(eO_num, "is Odd\n")

evenOdd = int(input("Enter a number to check if the value is Even or Odd : "))
evenOddCheck_bitwiseAND(evenOdd)