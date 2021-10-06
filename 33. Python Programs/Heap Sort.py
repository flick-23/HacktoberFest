from heapq import heappop, heappush  
   
 class Car:  
     def __init__(self, model, year):  
         self.model = model  
         self.year = year  
   
     def __str__(self):  
         return str.format("Model Name: {}, Year: {}", self.model, self.year)  
   
     def __lt__(self, other):  
         return self.year < other.year  
   
     def __gt__(self, other):  
         return other.__lt__(self)  
   
     def __eq__(self, other):  
         return self.year == other.year  
   
     def __ne__(self, other):  
         return not self.__eq__(other)  
   
   
 def heapsort(list1):  
     heap = []  
     for element in list1:  
         heappush(heap, element)  
   
     ordered = []  
   
     while heap:  
         ordered.append(heappop(heap))  
   
     return ordered  
   
   
 car1 = Car("Renault", 2001)  
 car2 = Car("Bentley", 2005)  
 car3 = Car("Kia", 2014)  
 car4 = Car("Maruti Suzuki", 1999);  
 car5 = Car("Nano", 2012)  
   
 list1 = [car1, car2, car3, car4, car5]  
   
 for c in Heapsort Heapsort (list1):  
     print(c)
