
def evenOddCheck_modulus(eO_num):
    print("Method : evenOddCheck_modulus()")

    if (eO_num % 2) == 0:
        print(eO_num, "is Even")
    else:
        print(eO_num, "is Odd\n")

evenOdd = int(input("Enter a number to check if the value is Even or Odd : "))
evenOddCheck_modulus(evenOdd)