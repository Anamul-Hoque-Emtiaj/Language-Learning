mat=[
    [1,2,3],
    [4,5,6],
]
mat[1][0]=10
print(mat[0][2])
print(mat[1][0])
for row in mat :
    for col in row :
        print(col)