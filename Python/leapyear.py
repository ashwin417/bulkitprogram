print('\t\t\t','.'*10,'Python program workout by AR','.'*10)
print('Lets see if your given year is a leap year:)')
Y=int(input("Enter your year: "))
if(Y % 400 == 0) or  (Y % 100 != 0) and  (Y % 4 == 0):
    print("This is a leap Year!!")
else:
    print ("This is not a leap Year!!")
print('\t\t\t\t','.'*10,'Thank you!','.'*10)
