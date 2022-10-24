def swap(a, b):
    return b, a

def loop_example_range(n):
    for x in range(n):
        print(x)

def loop_example_while(n):
    i = 1
    while i<=n:
        print(i)
        i = i + 1

def multiplication_table(n):
    i = 1
    while i<=10:
        print(str(n) + " * " + str(i) + " = " + str(n*i))
        i = i + 1
# a = 6
# b = 7
# print("a is " + str(a))
# print("b is " + str(b))
# a,b = swap(a,b)
# print("a is " + str(a))
# print("b is " + str(b))

# loop_example_range(50)
# loop_example_while(20)
# n = input("Enter the number: ")
# multiplication_table(int(n))

'''
*
* *
* * *
* * * *
* * * * *

'''

# def printline(x):
#     i = 1
#     while i<=x:
#         print("*",end='')
#         i = i + 1

# def printPattern(x):
#     i=1
#     while (i<=x):
#         printline(i)
#         print("")
#         i = i + 1

# n = input("Enter number of lines: ")
# printPattern(int(n))

'''
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
'''


# def printline(x):
#     i = 1
#     while i<=x:
#         print(x,end='')
#         i = i + 1

# def printPattern(x):
#     i=1
#     while (i<=x):
#         printline(i)
#         print("")
#         i = i + 1

# n = input("Enter number of lines: ")
# printPattern(int(n))


'''
0
0 1
0 1 0
0 1 0 1
0 1 0 1 0
0 1 0 1 0 1

1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
1 0 1 0 1 0

0
1 0
0 1 0
1 0 1 0
0 1 0 1 0
1 0 1 0 1 0

    *
   **
  ***
 ****
*****

*****
****
***
**
*

'''

# def printline(x):
#     i = 1
#     while i<=x:
#         print("*",end='')
#         i = i + 1

# def printPattern(x):
#     i=x
#     while (i>=1):
#         printline(i)
#         print("")
#         i = i - 1

# n = input("Enter number of lines: ")
# printPattern(int(n))


# '''
#     *
#    **
#   ***
#  ****
# *****
# '''

# def printline(x,alpha):
#     i=1
#     while i<=x:
#         print(alpha,end='')
#         i = i + 1

# def printPattern(x):
#     i=1
#     while (i<=x):
#         printline(x-i,' ')
#         printline(i,'*')
#         print("")
#         i = i + 1

# n = input("Enter number of lines: ")
# printPattern(int(n))


'''
0
1 0
0 1 0
1 0 1 0
0 1 0 1 0
'''

def printline(x,alpha,beta):
    i=1
    while i<=x:
        if i%2==0:
            print(alpha,end='')
            i = i + 1
        else:
            print(beta,end='')
            i = i + 1

def printPattern(x):
    i=1
    while (i<=x):
        if(i%2==0):
            printline(i,'0','1')
        else:
            printline(i,'1','0')
        print("")
        i = i + 1

n = input("Enter number of lines: ")
printPattern(int(n))