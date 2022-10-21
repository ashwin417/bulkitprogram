n=int(input("Enter a positive integer: "))
print("Palindromic triangle of size %d",n,"is")
for i in range (1,n):
    print((pow(10,i)//9)**2)
