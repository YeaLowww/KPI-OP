def join(a, b):
    if b==[]:
        return ''
    output=b[0]
    for c in b[1:]:
        output += a + c
    return output

string = input()               #Наш рядок
lenght = int(input())          #Наша довжина
lis = []                       #Рядок куди ми добавляємо слова
for i in string.split():       #Розподіл рядка на слова
    if (len(i) >= lenght):     #Наша умова
        lis.append(i)          #Добавленння слова в список
print(join(' ',))           #' '+.join(lis) Перетворення списка на рядок

