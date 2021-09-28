x = float(input())                    #Змінні які нам потрібні
n = 1
k = 0
suma = 0
a = 0

while 1:                             #Цикл
    a = 0
    a = x/((n**0.5)*(n+2))            #Формула
    k = n
    n = n + 1                         #Для наступного числа
    suma = suma + a                   #Рахуємо суму
    if k>10 and abs(a) < 0.00001:     #Виконання умов
        break                         #Вихід з циклу
print (suma)
    
