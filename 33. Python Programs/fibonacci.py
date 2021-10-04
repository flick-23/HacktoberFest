# Q. Take input from the user to get fibonacci series till the number entered 
# Ex - input:3
# Ouput: 0, 1, 1

nterms = int(input("How many terms do you want? "))

# first two terms
n1, n2 = 0, 1
count = 0

# check if the number of terms is valid
if nterms <= 0:
   print("Please enter a positive integer")
# if there is only one term, return n1
elif nterms == 1:
   print("Fibonacci sequence upto",nterms,":")
   print(n1)
# generate fibonacci sequence
else:
   print(f"Fibonacci sequence upto {nterms} digits :")
   while count < nterms:
       print(n1)
       nth = n1 + n2
       # update values
       n1 = n2
       n2 = nth
       count += 1
       
