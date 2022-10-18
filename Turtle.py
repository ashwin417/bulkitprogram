import turtle
loadWindow = turtle.Screen()
loadWindow.bgcolor("light blue")
turtle.color("red")
turtle.speed(3)
 
for i in range(100):
    turtle.circle(4*i)
    turtle.circle(-4*i)
    turtle.right(i)
 
turtle.exitonclick()
