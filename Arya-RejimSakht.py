"""
@Quera-CodeCup4
"""
m = {'R': 0, 'Y': 0, 'G': 0}
s = input()
for a in s:
    m[a] += 1
if m['R'] >= 3 or (m['R'] >= 2 and m['Y'] >= 2) or m['G'] == 0:
    print("nakhor lite")
else:
    print("rahat baash")
