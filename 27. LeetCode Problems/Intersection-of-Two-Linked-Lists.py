# Problem: Intersection of Two Linked Lists
# Link: 
# Description: Given the heads of two singly linked-lists headA and headB, 
#              return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.
# Contributor: Harsh Udai (https://github.com/HarshUdai)
# Code:


# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> ListNode:
        
        te1 = headA
        te2 = headB
        
        count_1 = 0
        count_2 = 0
        while(te1!=None):
            count_1+=1
            te1=te1.next
        while(te2!=None):
            count_2+=1
            te2=te2.next
            
        if(count_1>count_2):
            d=count_1-count_2
            temp1=headA
            temp2=headB
            for i in range(d):
                temp1=temp1.next
                
            while(temp1!=None and temp2!=None):
                if(temp1==temp2):
                    return temp1
                
                temp1=temp1.next
                temp2=temp2.next
                    
            return None
            
            
        else:
            d=count_2-count_1
            temp1=headA
            temp2=headB
            for i in range(d):
                temp2=temp2.next
                
            while(temp1!=None and temp2!=None):
                if(temp1==temp2):
                    return temp1
                
                temp1=temp1.next
                temp2=temp2.next
                    
            return None
        
# Time Complexity: O(n).
# Space Complexity: O(1).    

# Thank You