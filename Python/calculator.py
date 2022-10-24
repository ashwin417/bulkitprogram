def add(a,b):
    return(a+b)
def sub(a,b):
    return(a-b)
def mult(a,b):
    return(a*b)
def div(a,b):
    return(a/b)

while True:
    operator=input( "'+': Addition \n'-': Subtraction \n'*': Multiplicatiion \n'/': Division \nEnter an operator from above or 'q' to quit: " ).lower()
    if operator=="q":
        break
    num1=int(input("Enter first number: "))
    num2=int(input("Enter second number: "))
    if operator=="+":
        result=add(num1,num2)
        print(num1,"+",num2,"=",result)
    elif operator=="-":
        result=sub(num1,num2)
        print(num1,"-",num2,"=",result)
    elif operator=="*":
        result=mult(num1,num2)
        print(num1,"*",num2,"=",result)
    elif operator=="/":
        result=div(num1,num2)
        print(num1,"/",num2,"=",result)
    else:
        print("Invalid Entry")
