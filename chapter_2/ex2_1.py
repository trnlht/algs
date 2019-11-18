import random


n = 1000000
id_arr = list(range(n))
sz = [1 for x in range(n)]

union_count = 0
edge_count = 0

while union_count != (n - 1):
	p = random.randrange(0, n)
	q = random.randrange(0, n)

	edge_count += 1

	#Проходим по ссылкам до корня дерева для каждого эл-та
	while(p != id_arr[p]):
		id_arr[p] = id_arr[id_arr[p]]
		p = id_arr[p]

	while(q != id_arr[q]):
		id_arr[q] = id_arr[id_arr[q]]
		q = id_arr[q]

	if p == q:
		continue
	
	if sz[p] < sz[q]:
		id_arr[p] = q
		sz[q] += sz[p]
	else:
		id_arr[q] = p
		sz[p] += sz[q]
	
	union_count += 1

print("N = ", n)
print("union_count = ", union_count)
print("edge_count = ", edge_count)

