def product_number(n):
    Product = 1
    while n != 0:
        if n % 10 != 0:
            Product *= n % 10
        n //= 10
    return Product


if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        n = int(input())
        print(product_number(n), end="\n")
