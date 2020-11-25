(a, b, c, d), t = (int(x) for x in input("").split()), "N"

if (abs(b - c) < a < b + c or
    abs(b - d) < a < b + d or
    abs(c - d) < a < c + d or
    abs(a - c) < b < a + c or
    abs(a - d) < b < a + d or
    abs(c - d) < b < c + d or
    abs(a - b) < c < a + b or
    abs(a - d) < c < a + d or
    abs(b - d) < c < b + d or
    abs(a - b) < d < a + b or
    abs(a - c) < d < a + c or
    abs(b - c) < d < b + c):
    t = "S"

print(t)