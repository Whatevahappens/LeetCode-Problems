class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        num_len = len(digits)
        num_val=0
        for i in range(num_len-1, -1, -1):
            num_val=num_val+digits[num_len-i-1]*pow(10, i)
        num_val+=1
        c=num_val
        counter=0
        while c>=10:
            counter+=1
            c/=10
        counter+=1
        reduction = 0
        valued=[]
        for j in range(counter-1,-1, -1):
            b = int(num_val/pow(10,j))
            valued.append(b)
            b = b * pow(10,j)
            num_val-=b
        return valued