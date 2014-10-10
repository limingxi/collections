import random

def rand5():
	return random.randint(1,5)

def rand7():
	arr=[[1,2,3,4,5],[6,7,1,2,3],[4,5,6,7,1],[2,3,4,5,6],[7,0,0,0,0]]
	i=rand5()
	j=rand5()
	while(arr[i-1][j-1]==0):
		i=rand5()
		j=rand5()
	return arr[i-1][j-1]
