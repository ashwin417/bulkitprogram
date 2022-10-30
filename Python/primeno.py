print('\t\t\t','.'*10,'Python program workout by AR','.'*10)
print('Lets see if your number is a prime number:')
x=int(input('Enter your number: '))
if x > 1:
    for i in range(2,x):
        if (x % i) == 0:
            print('Your number,',x,',is not a prime number')
            break
        else:
            print('Your number,',x,',is a prime number:)')
else:
    print('Your number,',x,',is not a prime number')
print('\t\t\t\t','.'*10,'Thank you!','.'*10)
