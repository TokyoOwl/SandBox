while True:
    print("Введите первое число")
    s = int(input())
    print("Введите второе число")
    s1 = int(input())
    print("Введите операцию")
    s2 = input()
    if s2 == "+":
        s3 = s + s1
        print(f"Результат = {s3}")
    if s2 == "-":
        s3 = s - s1
        print(f"Результат = {s3}")
    if s2 == "*":
        s3 = s * s1
        print(f"Результат = {s3}")
    if s2 == "/":
        s3 = s / s1
        print(f"Результат = {s3}")
    if s2 == "~":
        break
