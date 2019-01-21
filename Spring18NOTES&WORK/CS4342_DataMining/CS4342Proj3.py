from numpy.random import rand
from numpy import square, sqrt

#Choice of eps: eps is distance measure. eps chosen to be low (10) to give a low amount of clusters to make graphing simpler. A very high eps makes all the points group into one cluster.
#Chioce of MinPts: Minimum Points to form a cluster was chosen relatively high (5) to eps to give a low amount of clusters to make graphing easier. 
def regionQuery(P, eps, D):	
	neighbourPts = []
	for point in D:
		if sqrt(square(P[1] - point[1]) + square(P[0] - point[0]))<eps:
			neighbourPts.append(point)
	return neighbourPts

def DBSCAN(D, eps, MinPts):
	noise = []
	visited = []
	C = []
	c_n = -1
	pointCount = 0
	for point in D:
	    visited.append(point) #marking point as visited
	    neighbourPts = regionQuery(point, eps, D) #search for number of neighbor points to compare to eps
	    pointCount+=1 #increment counter
	    print ("Point: "), pointCount 
	    if len(neighbourPts) < MinPts: #noise point case
		    noise.append(point)
		    print ("NOISE point: ")
		    print (point)
	    else: #point is in a cluster bc has more than min neighbors
		    C.append([point]) #add point to cluster array	
		    c_n+=1
		    expandCluster(point, neighbourPts, C, c_n,eps, MinPts, D, visited)
	
	print ("Eps: ") , (eps)
	print ("MinPts: ") , (MinPts)
	print ("Number of clustered points: ") , len(C)
	print ("Number of noise points: "), len(noise)
	for cluster in C:
	    if len(cluster) > MinPts: #length cluster GREATER than MinPts bc Cluster counts itself as a point so length of cluster must be >= length+1
	    #if len(point) > MinPts:
	        print ("Cluster consists of points: "), cluster

def expandCluster(P, neighbourPts, C, c_n,eps, MinPts, D, visited):
	C[c_n].append(P)
	#print ("starting expandCluster")
	for point in neighbourPts:
	    if point not in visited:
	        visited.append(point)
	        neighbourPts_2 = regionQuery(point, eps, D)
		if len(neighbourPts_2) >= MinPts:
		    neighbourPts += neighbourPts_2
		if point not in (i for i in C):
		    C[c_n].append(point)

eps = 9

x=100*rand(1000)
y=100*rand(1000)
l=[]
for i in range(0,30):
  if i < 100:
    l.append([i,x[i],y[i]])
DBSCAN(l,eps,3)