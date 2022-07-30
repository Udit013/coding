# import random
# print("Hello")
# if 5 > 2:
#     print("five is greater than two")
# x = 5
# y = "world"
# # comment
# print(x)
# print(type(y))
# fruits = ["apple", 'grapes', "banana"]
# x, z, y = fruits
# print(x, z)
# print(y)
# print(x+y)
# print(type(z))


# x = 5
# def myfunc():
#     print("Python is ", x)


# myfunc()
# print(x)
# x = "awesome"
# print("Python is " + x)


# def myfunc():
#     global x
#     x = "notokay"
#     print("Python is " + x)


# myfunc()

# print("Python is " + x)
# x = range(6)
# print(x)

# print(random.randrange(1, 10))
# a = "Hello, World!"
# print(a[1])
# for x in "banana":
#     print(x)
#     a = "Hello, World!"
# print(len(a))

# txt = "The best things in life are free!"
# print("free" in txt)

# txt = "The best things in life are free!"
# if "free" in txt:
#     print("Yes, 'free' is present.")
# txt = "The best things in life are free!"
# print("expensive" not in txt)
# txt = "The best things in life are free!"
# if "expensive" not in txt:
#     print("No, 'expensive' is NOT present.")
# b = "Hello, World!"
# print(b[2:5])

# c="myworld"
# print(c[:3])


# b = "Hello, World!"
# print(b[-5:-2])
# a = "Hello, World!"
# print(a.upper())
# a = "Hello, World!"
# print(a.replace("l", "J"))
# a = "Hello, World!"
# print(a.split(",")) # returns ['Hello', ' World!']
# print(c.split('r'))
# age = 36
# txt = "My name is John, and I am {}"
# print(txt.format(age))


# v="my age is "
# m="{}19"
# print(m.format(v))
# quantity = 3
# itemno = 567
# price = 49.95
# myorder = "I want to pay {2} dollars for {0} pieces of item {1}."
# print(myorder.format(quantity, itemno, price))
# txt = "We are the so-called \"Vikings\" from the north."
# print(txt)
# p,t,k="the value is",90,"\124"
# print(p,"\r",t)
# print(k)


class myclass():
    def __len__(self):
        return 0


myobj = myclass()
print(bool(myobj))

# class myclass():
#   def __len__(self):
#     return 0

# myobj = myclass()
# print(bool(myobj))