print("Hello, World!")
name = "Илья Полушин"
print(f"Студент: {name}")
print("Дата: 25.10.2026")


def square(x: int) -> int:
    return x * x


def factorial(n: int) -> int:
    if n < 0:
        return 0
    if n == 0 or n == 1:
        return 1
    result = 1
    for i in range(2, n + 1):
        result *= i
    return result


number = 7
result = square(number)
print(f"Число: {number}")
print(f"Квадрат: {result}")

num = 5
fact = factorial(num)
print(f"Факториал {num}! = {fact}")
