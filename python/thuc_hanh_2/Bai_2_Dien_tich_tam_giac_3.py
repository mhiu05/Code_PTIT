import sys
data = sys.stdin.buffer.read().split()
if not data:
    sys.exit(0)
it = iter(data)
eps = 1e-12

N = int(next(it))
tris = []
edges = []  
xs = []
for _ in range(N):
    x1 = float(next(it)); y1 = float(next(it))
    x2 = float(next(it)); y2 = float(next(it))
    x3 = float(next(it)); y3 = float(next(it))
    tris.append((x1,y1,x2,y2,x3,y3))
    edges.append((x1,y1,x2,y2))
    edges.append((x2,y2,x3,y3))
    edges.append((x3,y3,x1,y1))
    xs.append(x1); xs.append(x2); xs.append(x3)

M = len(edges)
xs_ext = xs  
for i in range(M):
    x1,y1,x2,y2 = edges[i]
    a_minx = x1 if x1 < x2 else x2
    a_maxx = x2 if x2 > x1 else x1
    rx = x2 - x1; ry = y2 - y1
    for j in range(i+1, M):
        x3,y3,x4,y4 = edges[j]
        b_minx = x3 if x3 < x4 else x4
        b_maxx = x4 if x4 > x3 else x3
        if (a_maxx < b_minx - 1e-12) or (b_maxx < a_minx - 1e-12):
            continue
        sx = x4 - x3; sy = y4 - y3
        denom = rx * sy - ry * sx
        if abs(denom) < eps:
            continue
        qp_x = x3 - x1; qp_y = y3 - y1
        t = (qp_x * sy - qp_y * sx) / denom
        u = (qp_x * ry - qp_y * rx) / denom
        if t >= -1e-12 and t <= 1.0 + 1e-12 and u >= -1e-12 and u <= 1.0 + 1e-12:
            ix = x1 + rx * t
            xs_ext.append(ix)

xs_ext.sort()
xs_unique = []
if xs_ext:
    last = xs_ext[0]
    xs_unique.append(last)
    for v in xs_ext[1:]:
        if abs(v - last) > 1e-10 * (1.0 + abs(v)):
            xs_unique.append(v)
            last = v

if len(xs_unique) < 2:
    print("0.000000")
    sys.exit(0)

def union_length(intervals):
    if not intervals:
        return 0.0
    intervals.sort()
    total = 0.0
    cur_l, cur_r = intervals[0]
    for l, r in intervals[1:]:
        if l <= cur_r + 1e-12:
            if r > cur_r:
                cur_r = r
        else:
            if cur_r > cur_l:
                total += (cur_r - cur_l)
            cur_l, cur_r = l, r
    if cur_r > cur_l:
        total += (cur_r - cur_l)
    return total

area = 0.0
tris_local = tris
for i in range(len(xs_unique)-1):
    xl = xs_unique[i]; xr = xs_unique[i+1]
    dx = xr - xl
    if dx <= 1e-15:
        continue
    xm = (xl + xr) * 0.5
    if abs(xm - xl) < 1e-14 * (1.0 + abs(xl)):
        xm = xl + dx * 1e-6
    elif abs(xm - xr) < 1e-14 * (1.0 + abs(xr)):
        xm = xr - dx * 1e-6

    intervals = []
    append_int = intervals.append
    for (x1,y1,x2,y2,x3,y3) in tris_local:
        ylist = []
        # edge1
        if (x1 < xm and xm < x2) or (x2 < xm and xm < x1):
            t = (xm - x1) / (x2 - x1)
            ylist.append(y1 + t * (y2 - y1))
        if (x2 < xm and xm < x3) or (x3 < xm and xm < x2):
            t = (xm - x2) / (x3 - x2)
            ylist.append(y2 + t * (y3 - y2))
        if (x3 < xm and xm < x1) or (x1 < xm and xm < x3):
            t = (xm - x3) / (x1 - x3)
            ylist.append(y3 + t * (y1 - y3))

        if len(ylist) == 2:
            a = ylist[0]; b = ylist[1]
            if a <= b:
                append_int((a,b))
            else:
                append_int((b,a))
    total_y = union_length(intervals)
    area += total_y * dx

print("{:.6f}".format(area))
