import math
 
print("Введіть координати точки ")  #Просимо ввести данні
x = float(input("x = "))
y = float(input("y = "))
r = 1                               #Радіус за умовою
 
hypotenuse = math.sqrt(x ** 2 + y ** 2)  #Знаходимо гіпотенузу 
 
if x>=0 and y>=0 and y >= x and hypotenuse <= r: #Провірка чи належить точка площині 1 чверті
    print("Точка належить площині ")
elif x>=0 and y<=0 and -y <= x and hypotenuse <= r: #Провірка чи належить точка площині 2 чверті
    print("Точка належить площині")
elif x<=0 and y>=0 and y <= -x and hypotenuse <= r: #Провірка чи належить точка площині 3 чверті
    print("Точка належить площині")
elif x<=0 and y<=0 and y <= x and hypotenuse <= r: #Провірка чи належить точка площині 4 чверті
    print("Точка належить площині")
else:
    print("Точка НЕ належить площині")   #Якщо умови не виконуються

    

