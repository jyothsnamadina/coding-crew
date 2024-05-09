//Given an array arr[] of N integers, calculate the median.
class Solution:
	def find_median(self, v):
		V=sorted(v)  # sorted the values
		
		l=len(v)
		avg=l//2
	    if(l%2!=0):
	        return V[avg]  #if length of array odd then print middle number
	    else:
	        return (V[avg]+V[avg-1])//2  #else add both middle numbers and divide by 2

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		v = list(map(int,input().split())) 
		ob = Solution();
		ans = ob.find_median(v)
		print(ans)
